// Clase 21-3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

int edad;
char nombre[50];
int DNI;

using namespace std;


int main()

{
	cout << "ingrese nombre \n";
	cin >> nombre;

	cout << "ingrese edad \n";
	cin >> edad;

	cout << "Imgrese su DNI (Sin .)\n";
	cin >> DNI;

	cout << "Hola " << nombre << " " << "Su edad es: " << edad << " Y su DNI es: " << DNI;
	int getch();
	return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
