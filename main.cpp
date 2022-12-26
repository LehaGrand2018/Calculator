#include  <iostream>

#include "arithmeticAndLogicOperators.h"
#include <string>
using std::cout;

int main() {
	cout << sum(5, 10) << "\n";
	cout << bitwiseOr(1, 3) << "\n";
	cout << leftShift(1, 2, false) << "\n";
	int a = pow(2, 31) + 3;
	cout << a;
	return 0;

}