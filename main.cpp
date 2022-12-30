#include  <iostream>
#include "mathFunctions.h"
#include <string>
using std::cout;
using namespace::calculator;
int main() {
	cout << sum(5, 10) << "\n";
	cout << bitwiseAnd(1, 3) << "\n";
	cout << leftShift(1, 2, false) << "\n";
	int a = pow(2, 30);

	cout << a << "\n";
	cout << reciprocalFunction(5) << "\n";
	cout << factorial(5) << "\n";
	cout << logarithm(EXP) << "\n";
	cout << sqrt(5) << "\n";
	cout << pow(5, 0.5) << "\n";
	return 0;

}