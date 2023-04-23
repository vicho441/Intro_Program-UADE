/*
	1) En un juego de dúos, se usa un algoritmo que revisa los puntos de los jugadores del equipo para otorgarles, en el caso de que corresponda, un bonus. Dicho algoritmo comprueba lo siguiente:
	
	a)Si ambos puntajes son pares o si el primero es par y el segundo impar, indicar “bonus conseguido” y sumarle a cada jugador un 5% de sus puntos.
	
	b)Caso contrario indicar “el bonus no fue otorgado”.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int PuntosPlayer1 = 101;
	int PuntosPlayer2 = 23;

	if (PuntosPlayer1%2 == 0 && PuntosPlayer2%2 == 0 || PuntosPlayer1 % 2 == 0 && PuntosPlayer2 % 2 == 1) {
		PuntosPlayer1 = PuntosPlayer1 * 1.05;
		PuntosPlayer2 = PuntosPlayer2 * 1.05;
		cout << "Bonus conseguido ";
	}
	else {
		cout << "El bonus no fue otorgado";
	}
	
	cout << "\nPuntos Jugador 1 = " << PuntosPlayer1 << "\n Puntos Jugador 2 = " << PuntosPlayer2;
}