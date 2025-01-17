#include "ransac.hpp"

#include <iostream>
#include <random>
#include <cmath>

RANSAC::RANSAC(const int max_iterations, const double threshold)
    : max_iterations(max_iterations), threshold(threshold) {}

std::vector<circle> RANSAC::circle_ransac(std::vector<double> _x, std::vector<double> _y, const int circle_num)
{
      std::random_device seed_gen;
      std::mt19937 engine(seed_gen());
      std::uniform_real_distribution<float> dist1(0, _x.size());

      const int points_num = _x.size();
      std::vector<bool> inlier(points_num, false);
      std::vector<circle> return_circle;

      for (int now_circle_num = 0; now_circle_num < circle_num; now_circle_num++)
      {
            circle best_circle;
            std::vector<bool> guess_guess_inlier(points_num);
            int best_Score = 0;

            for (int i = 0; i < max_iterations; i++)
            {
                  std::vector<bool> guess_inlier = inlier;

                  int guess_inlier_count = 0;

                  std::random_device rd;
                  std::mt19937 gen(rd());
                  std::uniform_real_distribution<double> dis(0, points_num - 1);
                  double guess_1 = dis(gen);
                  double guess_2 = dis(gen);
                  double guess_3 = dis(gen);
                  while (guess_1 == guess_2 || guess_1 == guess_3 || guess_2 == guess_3)
                  {
                        guess_1 = dis(gen);
                        guess_2 = dis(gen);
                        guess_3 = dis(gen);
                  }
                  circle guess_circle = fit_circle(_x[guess_1], _y[guess_1], _x[guess_2], _y[guess_2], _x[guess_3], _y[guess_3]);
                  for (size_t j = 0; j < _x.size(); j++)
                  {
                        if (find_error(guess_circle, _x[j], _y[j]) < threshold && !inlier[j])
                        {
                              guess_inlier_count++;
                              guess_inlier[j] = true;
                        }
                  }

                  if (!guess_inlier_count == 0)
                  {
                        double Score = guess_inlier_count;
                        if (best_Score < Score)
                        {
                              guess_guess_inlier = guess_inlier;
                              best_circle.center_x = guess_circle.center_x;
                              best_circle.center_y = guess_circle.center_y;
                              best_circle.radius = guess_circle.radius;
                              best_Score = Score;
                        }
                  }
            }
            inlier = guess_guess_inlier;
            return_circle.push_back(best_circle);

      } // 線の数
      return return_circle;
}

double RANSAC::find_error(circle circle, double _x, double _y) const
{
      return abs(sqrt((circle.center_x - _x) * (circle.center_x - _x) + (circle.center_y - _y) * (circle.center_y - _y)) - circle.radius);
}

circle RANSAC::fit_circle(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3) const
{
      circle return_model;
      double denominator = 2.0 * ((_x1 - _x2) * (_y3 - _y1) - (_x3 - _x1) * (_y2 - _y1));
      return_model.center_x = ((_y1 - _y2) * (_x3 * _x3 - _x1 * _x1 + _y3 * _y3 - _y1 * _y1) - (_y1 - _y3) * (_x2 * _x2 - _x1 * _x1 + _y2 * _y2 - _y1 * _y1)) / denominator;
      return_model.center_y = ((_x1 - _x3) * (_x2 * _x2 - _x1 * _x1 + _y2 * _y2 - _y1 * _y1) - (_x1 - _x2) * (_x3 * _x3 - _x1 * _x1 + _y3 * _y3 - _y1 * _y1)) / denominator;
      return_model.radius = sqrt((return_model.center_x - _x1) * (return_model.center_x - _x1) + (return_model.center_y - _y1) * (return_model.center_y - _y1));
      return return_model;
}
