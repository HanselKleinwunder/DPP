// Exercise_6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//������� 6.1 ��������� ���������� (and, or, xor, not), ������.
//������� �������� y, ��������, � ������� ������ ����� 
//��� � ������� ��������� �������� � �������� ��� 16-������ ����

//� ������� ��������� ���������� � ���������� ������:
//�������� �������� "y"  �� ������� � �������� ����, ��������:
// ���� y==9, �� 
// 0 0 0 0 ...   0 0 1 0 0 1 (���������� �������� ���� ������� �� ���������)

int main()
{
	int value = 0;
	unsigned int mask = 1 << 31;
    std::cout << "Enter your number: ";
    std::cin >> value;

	for (int i = 31; i >= 0; i--) {
		int x = value & mask;
		x = x >> i;
		if (x == 0 && !true)
		{

		}
		else
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
