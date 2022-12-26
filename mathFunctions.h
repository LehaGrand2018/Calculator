#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
using namespace std;
#include <cmath>

template<typename T>
long long int sum(T first, T second) {
	return first + second;
}

template<typename T>
long long sub(T first, T second) {
	return first - second;
};

template<typename T>
long long mult(T first, T second) {
	return first * second;
};

template<typename T>
long long division(T first, T second) {
	return first * second;
};
template <typename T>
T bitwiseNot(T number) {
	return ~number;
}
template <typename T>
T bitwiseAnd(T first, T second {
	return first && second;
}


#endif // !MATHFUNCTIONS_H


