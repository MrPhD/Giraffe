/**
 *    > Author:   UncP
 *    > Mail:     770778010@qq.com
 *    > Github:   https://www.github.com/UncP/Mini_Ray_Tracer
 *    > Description:
 *
 *    > Created Time: 2016-08-08 17:43:50
**/

#ifndef _CONSTANT_HPP_
#define _CONSTANT_HPP_

#include <cmath>
#include <limits>

const double PI = 3.141592653589793238;
const double DOU_PI = 2.0 * PI;
const double kInfinity = std::numeric_limits<double>::max();
const double kRefractionRatio = 1.5;
const double kEpsilon = 1e-4;

#define radian(angle) (angle * (PI / 180.0))

#endif /* _CONSTANT_HPP_ */