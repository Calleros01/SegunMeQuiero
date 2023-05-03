// 2023_04_04_009_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Juan Pablo Calleros Gudiño
#include <cmath>
#include <iostream>

int main()
{
	int sel = 0;
	float n1 = 0;
	float n2 = 0;
	float vabsoluto = 0;
	float resultado = 0;
	std::cout << "Hola padrino, selecciona un numero entre el 1 y el 4 para la operacion a realizar 1-suma 2-resta 3-multiplicacion 4-division\n";
	std::cin >> sel;
	if (sel == 5)
	{
		std::cout << "escribe un digito para el valor absoluto\n";
	}
	else
	{
		std::cout << "pon 2 digitos\n";
		std::cin >> n1;
		std::cin >> n2;
	}
	switch (sel)
	{
	case 1:
		resultado = n1 + n2;
		std::cout << "el resultado es\n" << resultado;
		break;
	case 2:
		resultado = n1 - n2;
		std::cout << "el resultado es\n" << resultado;
		break;
	case 3:
		resultado = n1 * n2;
		std::cout << "el resultado es\n" << resultado;
		break;
	case 4:
		resultado = n1 / n2;
		std::cout << "el resultado es\n" << resultado;
		break;
	case 5:
		std::cin >> vabsoluto;
		if (vabsoluto >= 0)
		{
			std::cout << "El resultado es\n" << vabsoluto;

		}
		else
		{
			std::cout << "El numero es menor a 0\n";
			vabsoluto = vabsoluto * -1;
			std::cout << "El resultado es\n" << vabsoluto;
		}
		break;
	case 6:
		if (n1 > n2);
		std::cout << "El valor 1 es mayor\n";
	default:
		std::cout << "arre padrino, aquí no hay nada\n";
		break;
	}
	 
	


}
