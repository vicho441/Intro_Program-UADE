/* 
 a) Escriba un programa en C++ que imprima los números del 1 al 10 en orden descendente.El programa debe imprimir cada número en una línea nueva.
 b) Escriba un programa en C++ que lea un número entero positivo y luego imprima los números pares desde el 0 hasta el número entero positivo leído.
   El programa debe imprimir cada número par en una línea nueva. */

#include <iostream>
using namespace std;

int main()
{

	//Ejercicio A

	cout << "Ejercicio A)\n\n";

	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
	}

	//Ejercicio b

	cout << "Ejercicio B)\n\n";

	int PedidoNum = 0;
	cout << " ¿Que numero entero positivo desea usar?\n ";
	cin >> PedidoNum;
	
	for (int i = 2; i <= PedidoNum; i+=2)
	{
		cout << i << "\n";
	}
}
