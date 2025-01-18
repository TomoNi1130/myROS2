#ifndef RANSAC_HPP
#define RANSAC_HPP

#include <vector>

double pi = 3.1415;

// 円を表す構造体(標準形)
struct circle
{
      double center_x;
      double center_y;
      double radius;
};

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

struct point
{
      double x;
      double y;
};

// RANSAC クラスの定義
class RANSAC
{
public:
      RANSAC(int max_iterations, double threshold, std::vector<double> _x, std::vector<double> _y); // コンストラクタ

      // 円を検出するメソッド
      std::vector<circle> circle_ransac(const int circle_num);
      std::vector<line_segment> line_ransac(const int line_num);

private:
      // エラーを計算するメソッド
      double find_error(circle &circle, double &_x, double &_y) const;
      double find_error(line &line_segment, double &_x, double &_y) const;

      circle fit_circle(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3) const;
      line fit_line(double _x1, double _y1, double _x2, double _y2) const;

      const int max_iterations;
      const double threshold;

      double get_theta(double a, double b, double c) const;
      double get_distance_line(double x1, double y1, double x2, double y2) const;

      std::vector<double> _x, _y;
      std::vector<bool> inlier;
};

inline RANSAC::RANSAC(int max_iterations, double threshold, std::vector<double> _x, std::vector<double> _y)
    : max_iterations(max_iterations), threshold(threshold), _x(_x), _y(_y)
{
      inlier.resize(_x.size(), false);
}

#endif
