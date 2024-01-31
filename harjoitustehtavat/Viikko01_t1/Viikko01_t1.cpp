// Viikko01_t1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numero{ 0 };
    int *numero_p{ &numero };

    // 
    std::cout << &numero << std::endl;
    std::cout << numero << std::endl;
    *numero_p = 7;
    std::cout << numero << std::endl;

    //
    std::cout << &numero << std::endl;
    std::cout << numero << std::endl;

    std::cout << &numero_p << std::endl;
    std::cout << numero_p << std::endl;


}
