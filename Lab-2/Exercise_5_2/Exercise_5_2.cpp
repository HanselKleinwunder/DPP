// Exercise_5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//5.2
//≈сли число кодируетс€ более чем одним байтом, то важно, 
//в каком пор€дке байты записываютс€ в пам€ти компьютера или передаютс€ по лини€м св€зи.			
//¬ архитектуре x86  используетс€ пор€док от младшего к старшему (англ. little-endian)
//ƒл€ протоколов TCP/IP стандартным €вл€етс€ пор€док от старшего к младшему (англ. big-endian)  
//«адайте значение x, например:

//байты числа в пам€ти следуют в пор€дке от младшего к старшему
//помен€йте местами байты так, чтобы они следовали в пам€ти в обратном пор€дке 
//(от старшего к младшему)
//Ќапример, если x= 0xA1B2C3D4, то после перестановки получим 0xD4C3B2A1

int main()
{
    int x = 0xA1B2C3D4;
    
    int result = (x & 0x00FF00FF) << 8 | (x & 0xFF00FF00) >> 8;


    std::cout << result << std::endl;
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
