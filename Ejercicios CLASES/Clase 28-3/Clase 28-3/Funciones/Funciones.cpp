// Funciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int preba(int numero)
{
    return numero;
}

string NumeroParOImpar(int numero) {
    if (numero % 2 == 0)
    {
        return "Su numero es par";
    }
    else {
        return "Su numero es impar";
    }
}

int main()
{
    int numero = 0;
    cout << "Ingrese el numero deseado\n";
    cin >> numero;
    int NumeroSalida = preba(numero);
    string Par_Impar = NumeroParOImpar(numero);
    cout << "El valor de su numero es: " << NumeroSalida << "\n" << Par_Impar;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
