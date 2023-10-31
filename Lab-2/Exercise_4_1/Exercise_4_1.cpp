// Exercise_4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 4.1 Напишите фрагмент кода, который реализует с помощью for
//следующую логику: найти сумму заданного диапазона целых чисел.
//Задайте границы с помощью потока ввода (или прямо в коде).
//Предусмотрите защиту от ввода нижней границы больше, чем верхней.

//1) сформировать границы диапазона

//2) проверить корректность значений

//3) вычислить сумму

//4) проверить в отладчике значение (или вывести на консоль)

int main()
{
	int start, end, sum = 0;

	std::cout << "Enter the start of the integer range number: ";
	std::cin >> start;
	std::cout << "Enter the end of the integer range number: ";
	std::cin >> end;

	if (start > end)
	{
		for (size_t i = start; i <= end; i++)
		{
			sum += i;
		}

		std::cout << sum;
	}
	else
	{
		std::cout << "Error!";
	}
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
