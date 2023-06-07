// practica14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>


int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << "Esto es un adivina quien de controladores de valorant" << std::endl;
        std::cout << "Tu personaje es radiante\n ";
        std::cin >> aux;

        if (aux == true) 
        {
            std::cout << "Tu personaje es vato?\n ";
            std::cin >> aux;
            if (aux == true)
            {
                std::cout << "Tu personaje es relativamente nuevo?\n ";
                std::cin >> aux;
                if (aux == true) 
                {
                    std::cout << "Tu personaje es Omen\n";
                }
                else
                {
                    std::cout << "Tu personaje es Harbor\n";
                }
            }
            else 
            {
                std::cout << " Tu personaje es Astra\n";
            }
        }
        else 
        {
            std::cout << "Tu personaje no es radiante?\n ";
            std::cin >> aux;
            if (aux == true)
            {
                std::cout << "Tu personaje es vato\n ";
                std::cin >> aux;
                if (aux == true) 
                {
                    std::cout << " Tu personaje es Brimstone?\n";
                }
                else 
                {
                    std::cout << " Tu personaje es Viper\n";
                }
            }
            else
            {
                std::cout << " Chale bro, creo que no tienes ni idea de controladores\n";
            }
        }
    }
}

