#ifndef RANSAC_HPP
#define RANSAC_HPP

#include <vector>

// 円を表す構造体(標準形)
struct circle
{
      double center_x;
      double center_y;
      double radius;
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
      RANSAC(const int max_iterations, const double threshold); // コンストラクタ

      // 円を検出するメソッド
      std::vector<circle> circle_ransac(std::vector<double> _x, std::vector<double> _y, const int circle_num);

private:
      // エラーを計算するメソッド
      double find_error(circle circle, double _x, double _y) const;
      circle fit_circle(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3) const;
      const int max_iterations;
      const double threshold;
};

#endif
