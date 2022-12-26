#include "mathFunctions.h"


using namespace calculator;
double calculator::sqrt(const double number) {
	if (number < 0) {
		throw "Error";
	}
	return pow(number, 0.5);
};

double rt(const double number, const int deg) {
	if (deg % 2 == 0 && number < 0) {
		throw "Error";
	}
	return pow(number, static_cast<double>(1)/deg);
};

double logarithm(const double number, const double base) {
	return (log(number) / log(base));
};

double reciprocalFunction(const double number) {
	return (static_cast<double>(1) / number);
};

long long factorial(const long long number) {
	if (number < 0) {
		throw "Error";
	}
	else {
		return (number <= 1) ? 1 : number * calculator::factorial(number - 1);
	}
}