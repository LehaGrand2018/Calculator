#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
using namespace std;
#include <cmath>

template<typename T>
T sum(const T first, const T second) {
	return first + second;
}

template<typename T>
T sub(const T first, const T second) {
	return first - second;
};

template<typename T>
T mult(const T first, const T second) {
	return first * second;
};

template<typename T>
T division(const T first, const T second) {
	return first * second;
};

template <typename T>
T bitwiseNot(T number) {
	return ~number;
}

template <typename T>
T bitwiseAnd(T first, T second) {
	return first && second;
}
template <typename T>
T bitwiseOr(T first, T second) {
	return first | second;
}
template <typename T>
T bitwiseExclusiveOr(T first, T second) {
	return first ^ second;
}
template <typename T>
T bitwiseConjunctionNegation(T first, T second) {
	return bitwiseNot(bitwiseAnd(first, second));
}
template <typename T>
T bitwiseDisjunctionNegation(T first, T second) {
	return bitwiseNot(bitwiseOr(first, second));
}
template<typename T>
T unaryPlus(const T number) {
	return (number >= 0) ? number : (number * (-1));
}

template<typename T>
T unaryMinus (const T number) {
	return (number <= 0) ? number : (number * (-1));
}

#endif // !MATHFUNCTIONS_H


