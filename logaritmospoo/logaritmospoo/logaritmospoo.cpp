// logaritmospoo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


int main()
{

	int n;
	
	int a=1;
	

	cout << "cuantas n quieres?" << endl;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		a = a + 4;
		for (int j = 0; j <= n; j++)
		{
			a = a + 4;
			for (int k = 0; k <= n; k++)
			{
				
				cout << i << j << k << endl;
				a = a + 7;
			}
		}
	}
	cout << "numero total: " << a;
}
   


