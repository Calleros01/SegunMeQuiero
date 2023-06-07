// practica12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main() 
{ 
int opc;     
bool vida = true;     
int aux = 3;    
std::cout << "1. bucle de juego infinito 2. contador sel 0 al 100\n" << std::endl;     
std::cin >> opc;     
switch (opc) 
{ 
case 1:        
    while (vida) 
    { 
std::cout << "te quedan " << aux << " vidas\n" << std::endl;             
aux = aux - 1;             
if (aux <= -1) 
{ 
vida = false; 
} 
    }                      
break;    
case 2:          
    for (int i = 0; i <= 100; i++)
    { 
        std::cout << "El contador va en: " << i << std::endl; 
    }         
    break; 
} 
}
                                                                                                                                                                                                     