/*
    Deben completar una funcion max_of_four() que tome cuatro numeros como argumentos y devuelva el mayor de ellos.

    Tambien deberan escribir una funcion que sume los cuatro numeros que le pasemos como argumentos. Debera llamarse sum_of_four().
*/

#include <iostream>
using namespace std;

int max_of_four(int num1, int num2, int num3, int num4) { 

    int numMayor;

    if (num1 > num2 && num1 > num3 && num1 >> num4)
    {
        numMayor = num1;
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4) {
        numMayor = num2;
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4) {
        numMayor = num3;
    }
    else {
        numMayor = num4;
    }

    return numMayor;
}

int sum_of_four(int num1, int num2, int num3, int num4) {
    return num1 + num2 + num3 + num4;
}

int main()
{
    int Numero1;
    int Numero2;
    int Numero3;
    int Numero4;

    cout << "Ingrese el primer numero\n";
    cin >> Numero1;
    cout << "Ingrese el segundo numero\n";
    cin >> Numero2;
    cout << "Ingrese el tercer numero\n";
    cin >> Numero3;
    cout << "Ingrese el cuarto numero\n";
    cin >> Numero4;

    int NumeroMayor = max_of_four(Numero1, Numero2, Numero3, Numero4);

    cout << "El numero mayor es: " << NumeroMayor;
    cout << "\nLa suma de los numeros ingresados es: " << sum_of_four(Numero1, Numero2, Numero3, Numero4);
}