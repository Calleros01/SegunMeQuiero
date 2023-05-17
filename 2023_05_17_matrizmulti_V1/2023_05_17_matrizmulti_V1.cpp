// 2023_05_17_matrizmulti_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	srand(time(NULL));
	int mat[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat[i][j] = rand() % 10;

		}
	}
	//Imprimir toda la matriz

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		std::cout << mat[i][j]<< " ";

		}
		std::cout << std::endl;
	}
	int mat2[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mat2[i][j] = rand() % 10;

		}
	}
	//Imprimir toda la matriz

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << mat2[i][j] << " ";

		}
		std::cout << std::endl;
	}
	int mat3[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			mat3[i][j] = rand() % 10;

		}
	}
	//Imprimir toda la matriz

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << mat3[i][j] << " ";

		}
		std::cout << std::endl;
	}
}



