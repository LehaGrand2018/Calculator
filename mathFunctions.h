#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

template<typename T>
T absolute(const T number) {
	return (number >= 0) ? number : (number * (-1));
};

template<typename T>
double sqrt(const T number) {
	return sqrt(number);
};

template<typename T>
double reciprocalFunction(const T number) {
	return (static_cast<double>(1) / number);
};

#endif // !MATHFUNCTIONS_H


