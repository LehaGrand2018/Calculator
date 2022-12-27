#include  <iostream>
#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include <string>
using std::cout;

int main() {
	cout << sum(5, 10) << "\n";
	cout << bitwiseAnd(1, 3) << "\n";
	cout << leftShift(1, 2, false) << "\n";
	int a = pow(2, 30);

	cout << a << "\n";
	cout << reciprocalFunction(5) << "\n";
	return 0;

}