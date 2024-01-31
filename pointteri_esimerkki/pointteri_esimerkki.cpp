// pointteri_esimerkki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Osoitin funktion parametrina
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}




int main()
{
    // Muuttujan osoitteen hakeminen (osoitteeseen viittaaminen) &-operaattorilla
    int numero{ -99 };
    std::cout << &numero << std::endl; // prints address in hexadecimal

    // Osoitinmuuttuja voi sis�lt�� viittauksen muuttujan osoitteeseen
    int* numero_p{ &numero };
    std::cout << numero_p << std::endl;

    // nollaosoite
    int* nollaosoite{ nullptr };
    std::cout << nollaosoite << std::endl;

    // t�htimerkki osoitinmuttujan edess� on sis�lt�operattori.
    // Se viittaa osoitteessa olevan muuttujan sis�lt��n.
    std::cout << *numero_p << std::endl;


    // Taulukoiden ja osoittimien yhteys
    int arvot[] = { 4, 7, 11 };
    int* arvot_ptr{ arvot };

    std::cout << *arvot_ptr << std::endl; // tulostaa 4
    std::cout << *(arvot_ptr + 1) << std::endl; // tulostaa 7
    std::cout << *(arvot_ptr + 2) << std::endl; // tulostaa 11

    std::cout << *arvot_ptr << std::endl; // tulostaa 4
    std::cout << *arvot_ptr + 1 << std::endl; // tulostaa 5 (4+1)
    std::cout << *arvot_ptr + 2 << std::endl; // tulostaa 6 (4+2)

    std::cout << arvot_ptr << std::endl; // tulostaa indeksin 0 osoitteen
    std::cout << arvot_ptr + 1 << std::endl; // osoitteen heksadesimaaliarvo + 1
    std::cout << arvot_ptr + 2 << std::endl; // osoiteen heksadesimaaliarvo + 2


    // Osoitinoperaattorit

    // ++ siirt�� osoitinta eteenp�in, -- taaksep�in
    arvot_ptr++;
    std::cout << *arvot_ptr << std::endl; // Tulostaa 7
    arvot_ptr--;
    std::cout << *arvot_ptr << std::endl; // Tulostaa 4


    // viittausparametrin k�ytt� funktiossa
    int num1 = 2, num2 = -3;
    swap(&num1, &num2);

    std::cout << num1 << "\n" << num2 << "\n\n"; // tulostaa -3 ja 2 (eri j�rjestyksess�)


}

