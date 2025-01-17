#include "ransac.hpp"

#include <random>

RANSAC::RANSAC(const int max_iterations, const double threshold)
    : max_iterations(max_iterations), threshold(threshold) {}

circle RANSAC::circle_ransac(std::vector<double> _x, std::vector<double> _y)
{
      std::random_device seed_gen;
      std::mt19937 engine(seed_gen());
      std::uniform_real_distribution<float> dist1(0, _x.size());
}

double RANSAC::find_error(double a, double b, double c, double _x, double _y) const
{
}
