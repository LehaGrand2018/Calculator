#ifndef PROGRAM_H
#define PROGRAM_H
#include "mathFunctions.h"
#include "stringFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include "sortFunctions.h"
#include "inputOutputFunctions.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using namespace calculator;

class Program {
public:
	static int main() {
		/*setlocale(LC_ALL, "rus");
		cout << "Что вы хотите делать?\n1. Воспользоваться длинной арифметикой"
			 << "\n2. Воспользоваться конкретной функцией\n";
		int variant;
		cin >> variant;
		switch (variant) {
		case 1: {
			cout << "Введите алгебраическое выражение, содержащее операции ( ) + - * / % <= < == > => >> << & && ^ | ||\n";
			string expression;
			cin >> expression;
			cout << "Введенное вами выражение равно:\n" << count_reverse_polish_notation(reverse_polish_notation(expression));
			break;
		}
		case 2: {
			cout << "Выберите одну из функций:\n1. ";
		}
		default:
			cout << "Неправильный вариант ответа. Попробуйте еще раз!\n";
			break;
		}*/
		/*cout << cosDeg(-60);*/
		return 0;
		




		cout << absolute(-3) << '\n';
		cout << factorial(3) << '\n';
		cout << reciprocalFunction(3) << '\n';
		cout << power(3, -3) << '\n';
		cout << radical(3, 3) << '\n';
		cout << cotDeg(30) << '\n';
		string a = reverse_polish_notation("3+3/3");
		cout << count_reverse_polish_notation(a);
		return 0;
	}

};

#endif PROGRAM_H
