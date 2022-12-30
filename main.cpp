#include  <iostream>
#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include <string>

using std::cout;
using namespace::calculator;
int main() {
	cout << absolute(-3) << '\n';
	cout << factorial(3) << '\n';
	cout << reciprocalFunction(3) << '\n';
	cout << power(3, -3) << '\n';
	cout << radical(3,3) << '\n';
	cout << tanDeg(0) << '\n';
	return 0;

}