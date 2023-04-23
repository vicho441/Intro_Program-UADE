#include <iostream>

using namespace std;

string Categorizacion(int edad) {
	string categoria;
	edad < 18 ? categoria = "Menor" : edad >= 65 ? categoria = "jubilado" : categoria = "Mayor";
	return categoria;
}

int main()
{
	string InicialNombre;
	int edad;
	cout << "Ingrese su nombre\n";
	cin >> InicialNombre;
	cout << "Ingrese su edad\n";
	cin >> edad;
	
	cout << "Nuevo Ingreso de Usuario\n" << "Codigo- " << InicialNombre.front() << Categorizacion(edad);
}
