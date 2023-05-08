// adivinaquien_014.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>


int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << "Adivinemos el personaje de Valorant" << std::endl;
        std::cout << "Tu personaje es radiante?\n ";
        std::cin >> aux;

        if (aux == true) // es radiante?
        {
            std::cout << "Tu personaje es hombre?\n ";
            std::cin >> aux;
            if (aux == true) // Es hombre?
            {
                std::cout << "Tu personaje es controlador?\n ";
                std::cin >> aux;
                if (aux == true) // Es controlador
                {
                    std::cout << " Tu personaje es omen?\n";
                }
                else// No es omen
                {
                    std::cout << " Tu personaje es Harbor\n";
                }
            }
            
        }
        else //No es radiante
        {
            std::cout << "Tu personaje es radiante\n ";
            std::cin >> aux;
            if (aux == true)// Es hombre?
            {
                std::cout << "Tu personaje tiene tiene flashes?\n ";
                std::cin >> aux;
                if (aux == true) // Tiene flashes
                {
                    std::cout << " Tu personaje es KAY/0\n";
                }
                else // No es KAY/0
                {
                    std::cout << " Tu personaje es Breach\n";
                }
            }
            else// No es radiante
            {
                std::cout << " Tu personaje es\n";
            }
        }
    }
}