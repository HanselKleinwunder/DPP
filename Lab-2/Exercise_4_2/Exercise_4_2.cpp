// Exercise_4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Задание 4.2 Напишите фрагмент кода, который реализует с помощью do-while
//следующую логику: на каждой итерации цикла ввести с консоли целое значение
// и покинуть цикл, если значение удовлетворяет условию: 
// значение больше или равно 10 и четное.

//Замечание: проверка на четность с использованием операции остатка от деления
//нацело генерирует очень неэффективный код. Попробуйте реализовать альтернативный
//вариант.

int main()
{
    int count = 0;

    do 
    {
        std::cout << "Enter integer number: ";
        std::cin >> count;

    } while (!(count >= 10) && ((count & 1) == 0));
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
