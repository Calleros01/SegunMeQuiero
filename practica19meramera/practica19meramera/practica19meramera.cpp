// practica19meramera.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
int main()
{
   
    std::string* titulos = NULL;
    std::string* autores = NULL;
    std::string libros[10]; //Memoria estática
    int size;
    std::cout << "Cuantas pelis quieres registrar? " << std::endl;
    std::cin >> size;
    //Crear Arreglos dinámicos
    titulos = new std::string[size];
    autores = new std::string[size];
    //Ahora solicita la información
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
        std::cout << "Echale el nombre de la peli #: " << i + 1 << std::endl;
        getline(std::cin, titulos[i]);
        std::cout << "Quien hizo la peli #: " << i + 1 << std::endl;
        getline(std::cin, autores[i]);
    }
    //Imprime la información
    for (int i = 0; i < size; i++)
    {
        std::cout << "El Titulo de la peli: " << i + 1 << " es: " << titulos[i] << std::endl;

        std::cout << "El Autor de la peli: " << i + 1 << " es: " << autores[i] << std::endl;
    }
    //Recuerda siempre destriur la memoria dinámica
    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;
}