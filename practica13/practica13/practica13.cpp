// practica13.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool aux = true;
    std::string name;
    std::string nameU = "JP";
    std::string contra;
    std::string contraU = "´JPCG";

    while (aux)//Si la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "¿Hola, me dices tu nombre? \n";
        getline(std::cin, name);
        if (name == nameU)
        {
            std::cout << "Bienvenido " << name << " \n";
            std::cout << "Para seguir y saber quee eres tú, por favor ingresa tu contraseña: \n";
            getline(std::cin, contra);
            if (contra == contraU)
            {
                std::cout << "Que bueno tenerte por acá\n";
                system("pause");
            }
            else 
            {
                std::cout << "Tu contraseña es incorrecta pa \n";
                system("pause");
            }
        }
        else 
        {
            std::cout << "No sé quien eres, por favor vete " << std::endl;
            system("pause");
        }
        system("cls");
    }
}