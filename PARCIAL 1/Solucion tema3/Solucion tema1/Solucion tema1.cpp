


// REVISAR PARCIAL TEMA 1 PARA ENTENDER LA TEORIA. ACA HABRAN SOLO RESPUESTAS 

#include <iostream>
using namespace std;

void tema3() {

    cout << "1 - ¿Cual de las siguientes opciones corresponde a una cadena de caracteres correcta en su sintaxis ?" << endl;
    // Descomentar
    //string miCadena = Alejandro Medici
    //string miCadena = 'Uade';
    //string miCadena = "Nicolas Ferrar";
    //string miCadena = '5';

    /*
        La respuesya correcta es la tercera
    */

    cout << "2 - ¿Cual  es el output si el usuario ingresa 5.7 y luego presiona la tecla enter en su teclado?" << endl;
    {
        float x = 0;
        int y = 13;
        x = x + y;
        cin >> x;
        cout << y; // Aqui el ouput...
        // Respuestas:
        // y
        // 8.57E1
        // 8.5
        // x
        // Ninguna de las anteriores

        /*
            La respuesta es ninguna de las anteriores ya que la respuesta seria 13.
        */
    }

    cout << "3 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 10 * (10 / 2) + 3 * (1 + 2) * ((3 * 2) - 6);
        cout << x;
        // 53
        // 54
        // 0
        // 59
        // Ninguna de las anteriores

        /*
            La respuesta es ninguna de las anteriores ya que seia 50.
        */
    }

    cout << "4 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 1E1;
        cout << x;
        // 1
        // 11
        // 10
        // El valor es invalido
        // Hay un error en la sintaxis

        /*
            La respusya es 10
        */
    }


    cout << "5 - ¿Cual es el valor de la variable z?" << endl;
    {
        // descomentar lo que corresponda
        //int y = 1;
        //int y = y * 2;
        //int z = y--;
        //cout << z;
        // 1
        // 2
        // 3 
        // 4
        // 5

        /*
            Primero hay que entender que este ejercicio da error. Al poner int y dos veces estariamos haciendo algo llamado inicializacion multiple. 
            Eso no se puede. Para que sea correcto el codigo deberia quedar asi: 
              int y = 1;
              y = y * 2;
              int z = y--;
              cout << z;

              ahora si, con el codigo correcto, la respuesta es 2
        */
    }

    cout << "6 - ¿Cual es el valor de la variable a?" << endl;
    {
        int a = 3 - (5 % 5) * (8 % 10);
        cout << a;
        // 0
        // 1
        // 2 
        // 3
        // Ninguna de las anteriores

        /*
            La respuesta es 3
        */
    }

    cout << "7 - ¿Cual de las siguientes palabras NO puede ni debe ser usada como nombre de variable?" << endl;
    {
        //int Cout = 0;
        //int char = 1;
        //int default = 34;
        // Ninguna de las anteriores

        /*
            La respuesta es Ninguna de las anteriores
        */
    }

    cout << "8 - ¿Declare una cadena de caracteres?" << endl;
    {
        string myName = "Bjarne Stroustrup";
    }

    cout << "9 - ¿Cual es el output del siguiente codigo?" << endl;
    {
        int a = 8, b = --a, c = ++a;
        cout << c << b << a;
        // 989
        // 898
        // 979
        // 899
        // Ninguna de las anteriores
        cout << endl;
        /*
            La respuesta es 979 por lo que seria niguna de las anteriores
        */
    }

    cout << "10 - ¿Cual es el valor final de la variable k?" << endl;
    {
        int i = 0, j = -2, k = -1;
        if (i >= 0) {
            if (j <= 0) {
                if (k < 0 && k > -5)
                    k = k + 2;
                if (k <= 0)
                    k++;
            }
            else if (k < 0)
                k = k + 15 * 37;
        }

        if (i <= 0)
            i++;

        k = i + j + k;
        cout << k;

        /*
            K vale 0
        */
    }

    cout << "11 - Se debe generar de manera manual el mapa para un mod de Minecraft a partir de un tablero de 50x50" << endl;
    {
        // Le va a solicitar al jugador que ingrese por consola el nombre de la unidad que debe guardarse en cada celda los siguientes elementos que representados por un caracter;
        // * Casillero vacion, caracter: "0"
        // * Bloque de tierra, caracter: "T"
        // * Cofre, caracter: "$"
        // * Enemigo, caracter: "E"
        // Una vez completada la carga mostrar todos los valores almacenados por pantalla
        // Extra: en caso de que el usuario introduzca un valor que no sea valido debera estar contemplado por el programa y tomar una decision en base a eso.


        /*
            Este esta terminado en tema1 Parcial
        */
    }

}