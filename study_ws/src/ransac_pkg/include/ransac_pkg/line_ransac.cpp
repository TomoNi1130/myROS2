#include "ransac.hpp"

#include <iostream>
#include <random>
#include <cmath>

std::vector<line_segment> RANSAC::line_ransac(const int line_num)
{
      std::vector<line_segment> return_line;

      const int points_num = _x.size();

      for (int now_line_num = 0; now_line_num < line_num; now_line_num++)
      {
            line_segment best_line; // 求める線分
            std::vector<bool> guess_guess_inlier(points_num);
            int best_Score = 0;

            for (int i = 0; i < max_iterations; i++)
            {
                  std::random_device rd;
                  std::mt19937 gen(rd());
                  std::uniform_real_distribution<double> dis(0, _x.size() - 1);

                  std::vector<bool> guess_inlier = inlier;
                  std::vector<double> inlier_x;
                  std::vector<double> inlier_y;

                  int guess_inlier_count = 0;
                  bool break_flag = false;

                  double guess_1 = dis(gen);
                  double guess_2 = dis(gen);
                  while (guess_1 == guess_2)
                  {
                        guess_2 = dis(gen);
                  }
                  line guess_line = fit_line(_x[guess_1], _y[guess_1], _x[guess_2], _y[guess_2]);
                  for (size_t j = 0; j < _x.size(); j++)
                  {
                        if (find_error(guess_line, _x[j], _y[j]) < threshold && !inlier[j])
                        {
                              guess_inlier_count++;
                              guess_inlier[j] = true;
                              inlier_x.push_back(_x[j]);
                              inlier_y.push_back(_y[j]);
                        }
                  }

                  sort(inlier_x.begin(), inlier_x.end()); // inlierを順番に並べ替え

                  if (!inlier_x.size() == 0)
                  {
                        double Score = guess_inlier_count / sqrt(pow((*std::min_element(begin(inlier_x), end(inlier_x)) - *std::max_element(begin(inlier_x), end(inlier_x))), 2.0) + pow((*std::min_element(begin(inlier_y), end(inlier_y)) - *std::max_element(begin(inlier_y), end(inlier_y))), 2.0));
                        if (best_Score < Score && !break_flag)
                        {
                              guess_guess_inlier = guess_inlier;
                              best_line.a = guess_line.a;
                              best_line.b = guess_line.b;
                              best_line.c = guess_line.c;
                              best_line.low_x = *std::min_element(begin(inlier_x), end(inlier_x));
                              best_line.high_x = *std::max_element(begin(inlier_x), end(inlier_x));
                              best_line.high_y = *std::max_element(begin(inlier_y), end(inlier_y));
                              best_line.low_y = *std::min_element(begin(inlier_y), end(inlier_y));
                              best_line.distance = get_distance_line(best_line.low_x, best_line.low_y, best_line.high_x, best_line.high_y);
                              best_line.theta = get_theta(guess_line.a, guess_line.b, guess_line.c);
                              best_Score = Score;
                        }
                  }
            }
            inlier = guess_guess_inlier;
            return_line.push_back(best_line);

      } // 線の数
      return return_line;
}

double RANSAC::find_error(line &line, double &_x, double &_y) const
{
      return abs(line.a * _x + line.b * _y + line.c) / std::sqrt(line.a * line.a + line.b * line.b); // 差を返す
}

line RANSAC::fit_line(double _x1, double _y1, double _x2, double _y2) const // 二点の距離から直線を割り出す
{
      line guess_line;
      guess_line.a = _y2 - _y1;
      guess_line.b = -(_x2 - _x1);
      guess_line.c = _y1 * _x2 - _x1 * _y2;
      return guess_line;
}

double RANSAC::get_theta(double a, double b, double c) const
{
      double slope = b / a;
      if (-(a / b) < 0)
      {
            if (-(c / b) > 0)
            {
                  return std::atan(slope); // 第一象限
            }
            else
            {
                  return std::atan(slope) + pi; // 第三象限
            }
      }
      else
      {
            if (-(c / b) > 0)
            {
                  return std::atan(slope) + pi; // 第二象限
            }
            else
            {
                  return std::atan(slope) + 2 * pi; // 第四象限
            }
      }
}
double RANSAC::get_distance_line(double x1, double y1, double x2, double y2) const
{
      double a = x2 - x1;
      double b = y2 - y1;
      double a2 = a * a;
      double b2 = b * b;
      double r2 = a2 + b2;
      double tt = -(a * x1 + b * y1);
      if (tt < 0)
      {
            return sqrt(x1 * x1 + y1 * y1);
      }
      if (tt > r2)
      {
            return sqrt(x2 * x2 + y2 * y2);
      }
      double f1 = a * y1 - b * x1;
      return sqrt((f1 * f1) / r2);
}
