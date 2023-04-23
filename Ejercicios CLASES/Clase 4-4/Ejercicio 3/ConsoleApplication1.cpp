#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;

int NumAleatorio(int num) {
	//srand(time(NULL));
	int retornar;
	retornar = rand() % num;
	return retornar;
}

int DanioFor(int golpes) {
	int danioTotal = 0;
	for (int i = 0; i < golpes; i++)
	{
		int danio;
		danio = NumAleatorio(10);
		cout << "Danio del golpe numero " << i + 1 << " es " << danio << "\n\n";
		danioTotal = danioTotal + danio; 
	}
	return danioTotal;
}

int main()
{
    int VidaEnemigo = 100;
    int DanioMeteoroPegaso = 1;
	int DanioTotal = DanioFor(10);
	cout << "El danio total es "<< DanioTotal << " Y la vida restante del enemigo es: " << VidaEnemigo - DanioTotal;
}