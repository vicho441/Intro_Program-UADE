#include <iostream>
#include <string>
using namespace std;

string CartaGanadora(int c1, int c2) {
	string Cartagana;
	int Diferencia_de_poder;

	if (c1 > c2)
	{
		Diferencia_de_poder = c1 - c2;
		Cartagana = "Gana la carta 1 ";
	}
	else {
		Diferencia_de_poder = c2 - c1;
		Cartagana = "Gana la carta 2 ";
	}
	string conversionIntString = to_string(Diferencia_de_poder);
	
	return Cartagana + "Con una diferencia de poder de: " + conversionIntString;
}

int main()
{
	int Valor_carta1;
	int Valor_carta2;
	
	cout << "Ingrese el ataque de la carta 1 \n";
	cin >> Valor_carta1;

	cout << "Ingrese el ataque de la carta 2 \n";
	cin >> Valor_carta2;

	cout << CartaGanadora(Valor_carta1, Valor_carta2);
}