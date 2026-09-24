#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool* miVector = new bool[10];
	int x;
	string resultado;

	while (true)
	{
		cout << "introduce un numero para saber si es par o impar: ";
		cin >> x;

		miVector[0] = { x % 2 == 0 };

		if (miVector[0]) {
			resultado = "par";
		}
		else {
			resultado = "impar";
		}

		cout << "El numero es " << resultado << endl;


		/*En iniciar el programa, crea un vector dinàmic de booleans amb bool* elMeuVector = new bool[10]; i
		calcula si els números de 0 a 9 són parells o senars.*/

	}
}