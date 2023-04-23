/*
    2) Dada la nota de un examen que se califica del 1 al 10, indicar si aprobó, promociono o reprobó, sabiendo que menos de 4 es reprobado, menos de 8 es aprobado y más de 8 es promocionado. 
    (resolver con if y con switch para comparar)
*/

#include <iostream>
using namespace std;

int main()
{
	int nota = 6;

   //CASO IF
	cout << "CASO IF: ";

	if (nota < 4)
	{
		cout << "Reprobado";
	}
	else if(nota >=4 && nota < 8) {
		cout << "Aprobado";
	}
	else {
		cout << "Promocionado";
	}

	//CASO SWITCH
	cout << "\nCASO SWITCH: ";

	switch (nota)
	{
	case 1:
		cout << "Reprobado";
		break;
	case 2:
		cout << "Reprobado";
		break;
	case 3:
		cout << "Reprobado";
		break;
	case 4:
		cout << "Aprobado";
		break;
	case 5:
		cout << "Aprobado";
		break;
	case 6:
		cout << "Aprobado";
		break;
	case 7:
		cout << "Aprobado";
		break;
	default:
		cout << "Promocionado";
		break;
	}
}
