// Exercise_4_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 4.3 Напишите фрагмент кода, который реализует с помощью while
//следующую логику: исходно int x = 0; 
//на каждой итерации x=x+1, sum=sum+1/x
//найти значение x, при котором sum>1.7

int main()
{
    int x = 0;
	double sum = 0;

	while (sum <= 1.7)
	{
		x += 1;
		sum = sum + 1 / static_cast<double>(x);
	}

	std::cout << x << std::endl;
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
