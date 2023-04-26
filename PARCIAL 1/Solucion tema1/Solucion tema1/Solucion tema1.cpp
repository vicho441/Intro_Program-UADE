// Solucion tema1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void tema1() {

    cout << "1 - ¿Cual de las siguientes opciones corresponde a una cadena de caracteres correcta en su sintaxis ?" << endl;
    // Descomentar
    //string miCadena = Alejandro Medici
    //string miCadena = 'Uade';
    string miCadena = "Nicolas Ferrar";     
    //string miCadena = '5';

    /*
        LA RESPUESTA CORRECRA ES LA TERCERA YA QUE AL DECLARAR UN STRING, EL VALOR DEL MISMO DEBE IR ENTRE "". 
        EN LA PRIMERA OPCION NO SOLO EL VALOR DEL STRING(Alejandro Medici) NO ESTA DECLARADO CON "". SINO QUE TAMBIEN,
        AL TERMINAR LA LINEA NO HAY ;. ALGO QUE DEBE IR SIEMPRE AL TERMINAR UNA LINEA.
        EN LA SEGUNDA OPCION, EL VALOR DEL STRING ESTA DECLARADO CON ''.
        POR ULTIMO, LA ULTIMA OPCION ESTA IGUAL QUE LA SEGUNDA, EL VALOR LO DECLARAN CON''.
    */

    cout << "2 - ¿Cual  es el output si el usuario ingresa 5.7 y luego presiona la tecla enter en su teclado?" << endl;
    {
        float x = 0;
        int y = 5;
        x = x + y;
        cin >> x;
        cout << y; // Aqui el ouput...
        // Respuestas:
        // y
        // 0.57E1
        // 5
        // x

        /*
            LA RESPUESTA CORRECTA ACA ES = 5. SI VEMOS EL OUTPUT ES Y. Y SI REVISAMOS EL CODIGO,
            Y SIEMPRE VALE 5. NO SE MODIFICA NUNCA EL Y. SIEMPRE SE MODIFICA X, Y DE HECHO, EL 
            USUARIO INGRESA 5.7 AL VALOR DE X, NO DE Y.
        */
    }

    cout << "3 - ¿Cual es el valor de la variable x?" << endl;
    {
        float x = 6 * (3 / 6) + 1 * (4 + 2) + ((3 * 2) - 6);
        cout << x;
        // 17
        // 16
        // 9
        // 10
        // Ninguna de las anteriores

        /*
            LA RESPUESTA CORRECTA ACA ES NINGUNA DE LAS ANTERIORES. PARA ENTENDER ESTE EJERCICIO SEPAREMOS POR TERMINOS
           
           PRIMERO TENEMOS 6 * (3 / 6). USANDO UNA CALCULADORA O LA LOGICA DE LA MATEMATICA LA RESPUESTA TENDRIA QUE SER 3. PERO NO ES ASI
            EN PROGRAMACION CUANDO HACES UNA OPERACION DE DOS NUMEROS QUE DECLARASTE QUE TIENEN ENTEROS(NO HAY NUMERO DESPUES DE LA COMA), VA 
            A DEVOLVER UN NUMERO ENTERO, Y EL RESTO QUE VA DESPUES DE LA COMA, NO LO TOMA. POR LO QUE, AL HACER 3 / 6, ESTO MAS ALLA QUE EN MATEMATICAS
            GENERALES DA 0.5, EN PROGRAMACION DA 0. SI LA DIVISION HUBIERA SIDO 3.00 / 6.00, AHI SI DARIA 0.5. BUENO AL SABER QUE 3 / 6 ES 0, LUEGO AL
            MULTIPLICARLO POR 6, DA 0. 
            
            DESPUES TENEMOS 1 * (4 + 2). ESTE TERMINO DA 6. MATEMATICAS DE TODA LA VIDA

            POR ULTIMO TENEMOS (3 * 2) - 6. 3 POR DOS DA 6, Y 6 - 6 DA CERO

            TAL QUE QUEDARIAN ASI LOS TERMINOS 0 + 6 + 0. QUE AL SUMARLOS NOS DA LA RESPUESTA: 6. LA CUAL NO ESTA EN LAS OPCIONES 
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
            LA RESPUESTA ES 10. ESTE PROBLEMA ES MAS DE MATEMATICAS QUE OTRA COSA. TENEMOS QUE SABER QUE LA LETRA E REPRESENTA 10,
            EL PRIMER 1 REPRESENTA A 1, Y, EL ULTIMO 1 REPRESENTA ELEVADO A LA 1. 1E1 ES COMO DECIR: 1 * 10 ELEVADO A LA 1.
        */
    }


    cout << "5 - ¿Cual es el valor de la variable z?" << endl;
    {
        int x = 1;
        int y = x++;
        int z = ++y;
        cout << z;
        // 1
        // 2
        // 3 
        // 4
        // 5

        /*
            LA RESPUESTA ACA ES 2.

            PARA ENTENDER ESTE RPBLEMA HAY QUE ENTENDER LA TEORIA DE LOS CONTADORES. BASICAMENTE CUANDO HACEMOS ++ALGO O ALGO++ HACEMOS QUE SU VALOR
            VALGA 1 ENTERO MAS. AHORA EN ESTE EJERCICIO HAY UNA PEQUEÑA TRAMPA. VAMOS PASO POR PASO

            int x = 1;
            PRIMERO SABEMOS QUE X ES IGUAL A 1

            int y = x++;
            ACA ESTA LA TRAMPA. EN ESTA PARTE, POR MAS QUE PAREZCA, NO TE ESTAN DICIENDO QUE Y ES IGUAL A X MAS 1.
            EL ++ VIENE DESPUES DE X, POR LO QUE VA INCREMENTAR EN 1, LUEGO DE LLAMAR A LA VARIABLE. Z VA A SER IGUAL A X QUE ES 1, Y LUEGO
            X VA A PASAR A VALER 2. PERO SOLO LUEGO DE QUE Z VALGA IGUAL QUE X, QUE VALIA 1. SUENA RARO. LO IMPORTANTE ES SABER QUE CUANDO EL ++ VA DESPUES
            DE LA VARIABLE, PRIMERO TOMA EL VALOR DE LA VARIABE, Y LUEGO DE EJECUTARSE ESE CODIGO, SE LE SUMARA UN ENTERO. ASIQUE EN ESTE MOMENTO
            Y VA A ESTAR VALIENDO 1.

            int z = ++y;
            ACA NOS DICEN QUE Z, VA A VALER ++Y. PODEMOS VER CON DIFERENCIA A LO ANTERIOR QUE ESTA VEZ EL ++ ESTA ANTES DE LA VARIABLE. POR LO QUE
            PRIMERO VA A SUMAR 1 Y DESPUES VA A EJECUTAR EL CODIGO. EN ESTE CASO Y VALIA 1, PRIMERO SE LE AUMENTA 1, POR LO QUE Y VA A ESTAR VALIENDO 2
            Y LUEGO Z VA A VALER LO MISMO QUE Y, OSEA, 2.
        */
    }

    cout << "6 - ¿Cual es el valor de la variable a?" << endl;
    {
        int a = 4 - (5 % 5) * (10 % 3);
        cout << a;
        // 0
        // 1
        // 2 
        // 3
        // 4

        /*
            LA RESPUESTA CORRECTA ACA ES 4. PARA ENTENDER ESTE PROBLEMA SEPAREMOS EN TERMINOS
            PRIMERO TENEMOS 4 Y EL OTRO TERMINO ES:
            (5 % 5) * (10 % 3)
            PARA ENTENDER ESTO DEBEMOS SABER QUE SIGNIFICA EN PROGRAMACION EL %. ESTO SIGNIFICA EL RESTO DE. SABEMOS QUE EN UNA DIVISON TENEMOS 3 PARTES
            EL DIVISOR EL DIVIDENDO Y EL RESTO. BUENO EL PORCENTAJE RETORNA EL RESTO. POR LO QUE 5 % 5 VA A RETORNAR EL RESTO DE 5 / 5. QUE VA A SER 0. 
            10 % 3 VA A ENTREGAR EL RESTO DE 10 / 3. QUE VA A SER 1. POR LO QUE EL TERMINO QUEDARIA FINALMENTE 0 * 1. QUE DARIA 0.
            AL RESTAR 4 - 0, DA 0.
           */
    }

    cout << "7 - ¿Cual de las siguientes palabras NO puede ni debe ser usada como nombre de variable?" << endl;
    {
        //int INT = 0;
        //int int x = 1;
        //int iNt = 34;
        // Ninguna de las anteriores

        /*
            ESTA PREGUNTA ESTA REDACTADA MEDIO MAL. LA UNICA PALABRA DE VARIABLE AHI QUE REALMENTE NO PUEDE SER USADA, ES LA SEGUNDA. YA QUE LUEGO DARIA ERROR
            A LA HORA DE LLAMARLA. int, ES UNA PALABRA RESERVADA. LAS OTRAS OPCIONES SI SE PUEDE PORQUE AL CAMBIAR LA SINTAXIS, Y, TENER MAYUSCULAS YA NO HACE
            REFERENCIA A LA PALABRA ASIGNADA. AHORA, LAS OTRAS DOS OPCIONES NO SE DEBERIAN USAR, SI SE PUEDEN, PERO ES UNA PESIMA PRACTICA. PARA RESPONDER LA PREGUNTA,
            NINGUNA DE LAS TRES SE DEBEN USAR. PERO SOLO UNA NO SE PUEDE USAR. AL PREGUNTARLE AL PROFESOR, EL ME EXPLICO QUE PARA INTERPRETARLA MEJOR HAY QUE CAMBIAR 2 COSAS,
            PRIMERO EN EL ENUNCIADO DONDE DICE " NO puede ni debe" HABRIA QUE IMAGINAR QUE DICE " NO puede O debe". Y SEGUNDO EN LAS RESPUESAS EN VEZ DE DECIR "Ninguna de las anteriores",
            DEBERIA DECIR "Todas las opciones". 
            LA RESPUES SERIA LA ULTIMA, QUE HACIENDO ESOS ULTIMOS CAMBIOS SIGNIFICAN QUE TODAS LAS OPCIONES NO PUEDEN O DEBEN SER USADAS.
        */
    }

    cout << "8 - ¿Declare una cadena de caracteres?" << endl;
    {
        string myName = "Bjarne Stroustrup";

        /*
            ESTA YA ESTA CONTESTADA, EN EL PARCIAL, NOS HARAN DECLARAR EL STRING.
        */
    }

    cout << "9 - ¿Cual es el output del siguiente codigo?" << endl;
    {
        int a = 5, b = --a, c = ++a;
        cout << c << b << a;
        // 757
        // 565
        // 656
        // 434
        // Ninguna de las anteriores
        cout << endl;

        /*
            EN ESTA SOLO HAY QUE USAR LA LOGICA VISTA CON LOS CONTADORES ++. LA RESPUESTA SERIA 545, QUE NO ESTA EN LAS OPCIONES
            ASIQUE SERIA: NINGUNA DE LAS ANTERIORES. PARA ENTENDER MEJOR VEAMOS QUE PASA PASO A PASO
            
            int a = 5 
            ACA A VALDRA 5

            b = --a
            ACA PRIMERO SE VA A EJECUTAR EL OPERADOR DE DECRECIMIENTO, HACIENDO QUE A VALGA 4 Y LUEGO LE ASIGNARA ESE VALOR A B

            c = ++a
            ACA A ESTABA VALIENDO 4 PERO AHORA SE LE SUMA 1, Y PASARA A VALER 5 DE NUEVO. LUEGO ESE VALOR SELE ASIGNA A C

            POR LO QUE A VALE 5, B VALE 4 Y C VALE 5. EN EL COUT LOS PONE JUNTOS ASIQUE LA CONSOLA DIRA: 545
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
            LA RESPUESTA ACA ES 0. ESTE HAY QUE IR PASO A PASO:

             int i = 0, j = -2, k = -1;
             ACA PODEMOS VER LOS VALORES DE I J Y K INICIALES

         if (i >= 0) {
         LA CONDICION PREGUNTA SI I ES MAYOR O IGUAL A 0. RESULTA SER QUE I VALE 0 ASIQUE SE VA A EJECUTAR EL CODIGO DE ABAJO

            if (j <= 0) {
            ACA LA CONDICION PREGUNTA SI J ES MENOR O IGUAL A 0. J VALE -2 ASIQUE SE VA A CUMPLIR LA CONDICION

                if (k < 0 && k > -5)
                ACA LA CONDICION PREGUNTA SI K ES MENOR QUE 0 Y MAYOR A -5. AL K VALER -1, CUMPLE LAS CONDICIONES

                    k = k + 2;
                    ACA SE LE AGREGA 2 A K. QUE PASA A VALER 1

                if (k <= 0)
                ACA PREGUNTA SI K ES MENOR O IGUAL A 0. COMO VIMOS ANTERIORMENTE, AHORA K VA A ESTAR VALIENDO 1, ASIQUE EL CODIGO NO SE EJECUTA
                    k++;
            }
            else if (k < 0)
            ESTE ELSE IF SE EJECUTARA SOLO Y TAN SOLO SI EL IF ANTERIOR NO SE EJECUTABA. AL EJECUTARSE EL IF ANTERIOR, ESTE DIRECTAMENTE NUNCA SE ACTIVARA

                k = k + 15 * 37;
        }

        if (i <= 0)
        ACA PREGUNTA SI I ES MENOR O IGUAL A 0. CONDICION QUE SE CUMPLE ASIQUE EJECUTARA EL CODIGO
            i++;
            ACA LE AGREGA 1 A I, QUE ESTARA VALIENDO 1 A PARTIR DE AHORA.

        k = i + j + k;
        FINALMENTE TENEMOS QUE K VA A VALER = I + J + K. SABEMOS QUE I VALE 1, QUE JOTA VALE -2 Y QUE K VALE 1. ASIQUE SERIA 1 -2 + 1. QUE DARIA 0.
        */
    }

    cout << "11 - Se debe generar de manera manual el mapa para un mod de Minecraft a partir de un tablero de 50x50" << endl;
    {

        char Mapa[50][50];

        for (int row = 0; row < 50; row++)
        {

            for (int column = 0; column < 50; column++)
            {
                char item;
                cout << "Ingrese por consola el nombre de la unidad que desea guardar poniendo un caracter 0 para casillero vacio, T para un bloque de tierra, $ para un cofre y E para un enemigo:\n";
                cin >> item;
                Mapa[row][column] = item;
            }
        }

        for (int row = 0; row < 50; row++)
        {

            for (int column = 0; column < 50; column++)
            {
                char item;
                cout << "Ingrese por consola el nombre de la unidad que desea guardar poniendo un caracter 0 para casillero vacio, T para un bloque de tierra, $ para un cofre y E para un enemigo:\n";
                cin >> item;
                if (item == '0' || item == 'T' || item == '$' || item == 'E')
                {
                    Mapa[row][column] = item;
                }
                else {
                    cout << "\n El dato ingresado no es un char con valor = 0, T, $ o E. Por favor vuelva a ingresar el valor:\n";
                    cin >> item;

                    if (item == '0' || item == 'T' || item == '$' || item == 'E')
                    {
                        Mapa[row][column] = item;
                    }
                    else {
                        cout << "\n El dato ingresado no es un char con valor = 0, T, $ o E. Por favor vuelva a ingresar un valor valido o se tomara el valor predeterminado 0:\n";
                        cin >> item;
                        if (item == '0' || item == 'T' || item == '$' || item == 'E')
                        {
                            Mapa[row][column] = item;
                        }
                        else {
                            Mapa[row][column] = '0';
                        }
                    }
                }
            }
        }
        /*
            Este ejercicio lo hice con el extra, es complejo de explicar. Primero revisar en resumen la teoria de los arrays, Luego si tienen alguna duda escrbirme al privado, me pueden
            preguntar en persona
        */

        // Le va a solicitar al jugador que ingrese por consola el nombre de la unidad que debe guardarse en cada celda los siguientes elementos que representados por un caracter;
        // * Casillero vacion, caracter: "0"
        // * Bloque de tierra, caracter: "T"
        // * Cofre, caracter: "$"
        // * Enemigo, caracter: "E"
        // Una vez completada la carga mostrar todos los valores almacenados por pantalla
        // Extra: en caso de que el usuario introduzca un valor que no sea valido debera estar contemplado por el programa y tomar una decision en base a eso.

    }

}
