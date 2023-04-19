// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Práctica 7
// Juan Pablo Calleros Gudiño

#include <iostream>

int main()
{
    int Num_Jugadores = 0;
    int opc = 0;
    std::cout << "Hola, bienvenido a la arena, cuantos peleadores hay?\n";
    std::cin >> Num_Jugadores;
    std::cout << "ESTO SERA ALGO INCREIBLE " << Num_Jugadores << "VEAMOS SI TIENEN LO NECESARIO PARA GANAR\n";
    std::cout << "Cual sera la forma de combate? 1.- Royal Rumble \n2.-Eliminatoria directa \n3.-Grupos, semifinal y final \n";
    switch (opc)
    {
    case 1:
        std::cout << "Esto sera una carniceria\n";
        //Royal rumble todas las peleas si son 10 jugadores serán 1contra el 2 el 3 el 4 el 5... etc el 2 contra el 3,4... etc

        break;
    case 2:
        std::cout << "Veamos quien sera el mejor\n";
        break;
    case 3:
        std::cout << "Esto sera mejor de lo que parece\n";
        break;
    default:
        std::cout << "Lo lamento, no hay nada\n";
        break;
    }

}

