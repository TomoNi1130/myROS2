#include <iostream>
#include <vector>
#include <array>
#include <random>
#include <cmath>
double pi = 3.1415;

struct line_segment
{
      // 線分にするためのデータ
      double low_x, high_x, low_y, high_y;
      // ax+by+c = 0  y= a/b*x+c/b
      double a, b, c;

      double distance; // 原点との距離

      double theta; // 角度
};

struct line
{
      double a, b, c;
};
class cloud_prosess
{
public:
      cloud_prosess(int all_points_number)
          : pi_unit(((4.0 / 3.0) * pi) / all_points_number), all_points_num(all_points_number) {}

      void range_to_cloud(const float length, const int number)
      {
            double theta = pi_unit * number - pi / 6;
            _x.push_back(cos(theta) * length);
            _y.push_back(sin(theta) * length);
      }
      std::vector<line_segment> ransac(const int line_num, const int max_iterations, const double threshold, int const Minimum_guarantee)
      {
            std::vector<bool> inlier(all_points_num, false);

            std::vector<line_segment> return_line;

            for (int now_line_num = 0; now_line_num < line_num; now_line_num++)
            {
                  line_segment best_line; // 求める線分
                  std::vector<bool> guess_guess_inlier(all_points_num);
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
                        for (int j = 0; j < _x.size(); j++)
                        {
                              if (calculate_error(_x[j], _y[j], guess_line) < threshold && !inlier[j])
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
                              double Score = guess_inlier_count / sqrt(((*std::min_element(begin(inlier_x), end(inlier_x)) - *std::max_element(begin(inlier_x), end(inlier_x))), 2.0) + pow((*std::min_element(begin(inlier_y), end(inlier_y)) - *std::max_element(begin(inlier_y), end(inlier_y))), 2.0));
                              if (best_Score < Score && !break_flag)
                              {
                                    best_Score = guess_inlier_count;
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
                              }
                        }
                  }
                  inlier = guess_guess_inlier;
                  return_line.push_back(best_line);

            } // 線の数
            return return_line;
      } // ransac関数

private:
      const double pi_unit;
      const int all_points_num;
      int now_line_number = 0;
      std::vector<double> _x, _y;

      double calculate_error(const double &x, const double &y, const line &model) // 誤差を求める
      {
            double error = abs(model.a * x + model.b * y + model.c) / std::sqrt(model.a * model.a + model.b * model.b);
            return error; // 差を返す
      }

      line fit_line(const double x_1, const double y_1, const double x_2, const double y_2) // 二点の距離から直線を割り出す
      {
            line guess_line;
            guess_line.a = y_2 - y_1;
            guess_line.b = -(x_2 - x_1);
            guess_line.c = y_1 * x_2 - x_1 * y_2;
            return guess_line;
      }

      double get_theta(double a, double b, double c)
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
      double get_distance_line(double x1, double y1, double x2, double y2)
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
};
