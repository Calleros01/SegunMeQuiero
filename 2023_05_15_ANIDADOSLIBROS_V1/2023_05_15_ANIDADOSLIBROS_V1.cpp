// 2023_05_15_ANIDADOSLIBROS_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
int main()
{
    std::string titulo[4];
    std::string autor[4];
    int fecha[5];
    std::cout << "Registra tus libros favoritos\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ingresa el titulo del libro " << i + 1 << std::endl;
        if (i > 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, titulo[i]);
        std::cout << "Ingresa el autor del libro " << i + 1 << std::endl;
        getline(std::cin, autor[i]);
        std::cout << "Ingresa la fecha de la publicacion del libro " << i + 1 << std::endl;
        std::cin >> fecha[i];
    }
    // funcion de muestreo
    std::cout << "Ya veo, tus libros son\n";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".- " <<
            titulo[j] << "\n El autor es " << autor[j] << "\n Publicado en " << fecha[j] << std::endl;
    }
}


