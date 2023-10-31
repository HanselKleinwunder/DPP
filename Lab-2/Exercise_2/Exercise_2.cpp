// Exercise_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 2. Логические операторы.
// В Григорианском календаре (которым мы все пользуемся) високосный год
// определяется по следующему алгоритму: високосным является каждый четвертый год,
// но каждый сотый високосным НЕ является, при этом каждый 400-й год все таки 
// високосный. Т.е. 1823 - не високосный, 1824 - високосный, 1900 - не високосный,
// 2000 - високосный.
// Напишите фрагмент кода, такой что:
// логическая переменная isLeapYear принимает значение true, если год, заданный
// переменной year - високосный.

// Примечание: НЕ надо пользоваться инструкциями if-else, switch и тернарным оператором 
//             НАДО написать логическое выражение в одну строку.
//(*)если возникнут затруднения при решении задачи, то можно сначала решить ее с помощью if-else,
// а потом уже выполнить предложенное задание.

int main()
{
	//int year = 1823;
	//int year = 1824;
	//int year = 1900;
	int year = 2000;

	//Вычислили значение 
	bool isLeapYear = (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
	std::cout << isLeapYear << std::endl;
	// проверили значение в отладчике
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
