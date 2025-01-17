#ifndef RANSAC_HPP
#define RANSAC_HPP

#include <vector>

// 円を表す構造体
struct circle
{
      double a, b, c;
};

// RANSAC クラスの定義
class RANSAC
{
public:
      RANSAC(const int max_iterations, const double threshold); // コンストラクタ

      // 円を検出するメソッド
      circle circle_ransac(std::vector<double> _x, std::vector<double> _y);

private:
      // エラーを計算するメソッド
      double find_error(double a, double b, double c, double _x, double _y) const;
      const int max_iterations;
      const double threshold;
};

#endif
