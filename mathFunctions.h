#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

#include <cmath>
namespace calculator{

#define EXP 2.7182818284590452353602

template<typename T>
T absolute(const T number) {
	return (number >= 0) ? number : (number * (-1));
};


double sqrt(const double number);

double rt(const double number, const int deg = 2);


double reciprocalFunction(const double);


long long factorial(const long long );

double logarithm(const double, const double = EXP);

}
#endif // !MATHFUNCTIONS_H
