// 2023_04_26_013_BUCLES_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
    std::string contraU = "111";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "hola, como te llamas? \n";
        getline(std::cin, name);
        if (name == nameU)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "bienvenido de vuelta " << name << " \n";
            std::cout << "Por seguridad, introduce tu contraseña: \n";
            getline(std::cin, contra);
            if (contra == contraU)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "que bueno tenerte de vuelta\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "seguro que si eres tu? \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "vete, no te topo" << std::endl;
            system("pause");
        }
        system("cls");
    }
}