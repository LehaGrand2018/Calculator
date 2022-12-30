#include  <iostream>
#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include "stringFunctions.h"
#include <string>
#include "Program.h"
using namespace calculator;
int main() {
	string s = calculator::reverse_polish_notation("3==4");
	cout << count_reverse_polish_notation(s);

}