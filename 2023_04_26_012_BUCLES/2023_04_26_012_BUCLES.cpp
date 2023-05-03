// 2023_04_26_012_BUCLES.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Juan Pablo Calleros Gudiño

#include <iostream>

int main()
{
    int vidas = 3;
    bool seguir = true;

    while (seguir)
    {
        std::cout << "Tienes 3 vidas\n";
        vidas = vidas - 1;
        std::cout << "Hasta para jugar eres pendejo\n";


        if (vidas <=0);
        {
            seguir = false;

            std::cout << "Ya mamaste\n";

        }

            
       
    }


    for (int i = 0; i < 100; i++)
        std::cout << "El contador va en\n" << i; 

    std::cout << "Quieres continuar? 0. Si 1. No\n";
    std::cin >> seguir;





}

