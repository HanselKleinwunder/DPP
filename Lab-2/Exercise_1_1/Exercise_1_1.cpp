// Exercise_1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 1.1 Напишите фрагмент кода, который переводит код символа, 
//хранящийся в переменной ch в противоположный регистр.
//Требуется предусмотреть проверку ситуации, когда пользователь ввел цифру
//или нажал другую клавишу, которой символ не соответствует

//Подсказка: работаем только с символами английского алфавита, для которого в таблице
// кодов ASCII код каждой буквы нижнего регистра на 0x20 больше кода 
// соответствующей буквы верхнего регистра.

//Обратите внимание, что в кодировочной таблице между буквами верхнего и нижнего регистра 
//расположены некоторые иные символы

int main()
{
    char ch;
    
    std::cout << "Enter any symbol, please: ";
    std::cin >> ch;

    if (ch >= 65 && ch <= 90) 
    {
        ch += 32;
        std::cout << ch;
    }
    else if (ch >= 97 && ch <= 122) 
    {
        ch -= 32;
        std::cout << ch;
    }
    else 
    {
        std::cout << "Error. You entered an invalid symbol." << std::endl;
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
