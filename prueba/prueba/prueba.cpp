#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
int main()
{
	int mat[2][3];


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			std::cin >> mat[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << mat[i][j] << " \n";

		}
		std::cout << std::endl;
	}

	int mat2[6][5];


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mat2[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << mat2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

