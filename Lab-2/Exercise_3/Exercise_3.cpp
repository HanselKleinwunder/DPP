// Exercise_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 3. Тернарный оператор.  
//С помощью тернарного оператора найдите максимальное из трех значений

//(*)если возникнут затруднения при решении задачи, то можно сначала решить ее с помощью if-else,
// а потом уже выполнить предложенное задание.

int main()
{
	int a = 20, b = 11, c = 10, max = 0;

	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	std::cout << max;
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
