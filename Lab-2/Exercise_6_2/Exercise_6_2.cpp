// Exercise_6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Выведите значение "y"  на консоль в двоичном виде, 
//пропустив незначащие нули, например:
// если y==9, то результат  1 0 0 1

int main()
{
	int value = 0;
	unsigned int mask = 1 << 3;
	std::cout << "Enter your number: ";
	std::cin >> value;

	for (int i = 3; i >= 0; i--)
	{
		int x = value & mask;
		x = x >> i;
		if ((x == 0) || (x == 1))
		{
			std::cout << (x);
		}

		mask = mask >> 1;
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
