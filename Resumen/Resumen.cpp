
// ¡¡¡¡ NOTA: Todos los cout o salidas de pantallas estan comentados con //. Para usarlos solo hay que eliminar el //. !!!!


/*
Primero vienen los includes. Sirven para justamente incluir una biblioteca que permita hacer siertas cosas en c++. Por ejemplo abajo esta el "#include <iostream>". 
Iostream es la biblioteca base de c++ y sirve para tener acceso a cosas como "cin" o "cout" usados para mosrarse en consola
*/
#include <iostream>

//Este es para trabajar con string. Ver abajo
#include <string>

/*
	Para ver algo por consola se escribe std::cout << (Lo que queramos mostrar en pantalla);
*/

/*
	El siguiente codigo sirve para no usar std:: cada ves que querramos hacer algo. por ejemplo ahora
	para ver algo por consola sera: cout << "Lo que se quiera mostrar"; (Ver el ejemplo anterior y comparar)
*/
using namespace std; 


/*
										FUNCIONES: (Leer luego de la explicacion de string) 

	Es una estructura de codigo que puede o no tener argumentos y retornar un resultado. Se crea afuera del main y se invoca adentro.
	su estructura es: 
	tipoValor nombreFuncion([tipo nombreArgumento], [tipo nombreArgumento]...]) {return valor;}
	Veamos un ejemplo:
*/
int FuncionSuma(int a, int b) {
	return a + b;
}
/*
	Este ejemplo toma un entero a y un entero b y los suma. El return va a devolver un int resultante
	de la suma enre a y b. Segun lo que se retorne es el tipo de valor de la funcion. al ser un int retorna int, sino da error
	si la funcion fuera:

	string FuncionSuma(int a, int b) {
	return a + b;
}
Daria error porque la funcion al ser del tipo string, debe devolver un string. 

	Notese que la variable a y b son variables locales(Ver parte de variables) que se activan solo cuando llamamos la funcion
	Para usarla debemos llamarla. Para eso mirar abajo(Luego de string)
*/



/*
int main es la funcion principal de c++. Todo el codigo que ejecutemos va a estar aca adentro
*/
int main()
{
	
/*
	Las variables son valores que la computadora almacena. Basicamente si queres hacer una suma de 1 mas 1 vas a necesitar
	tener variables. imaginemos que queremos hacer 5 + 3. para ello tenemos que hacer que 5 sea una variable y 3 sea otra 
	y despues las sumamos (Ver ejemplo de abajo). Para crear una variable debemos saber como esta compuesta: Primero tenemos
	el tipo de valor que queremos usar(Abajo especifica cuales hay). Luego el nombre que querremos ponerle a la variable. Por 
	ultimo debemos asignarle un valor. El valor estara ligado al tipo de variable.

	Tipos de valores: 
	1) int: usado para valores tipo números enteros, por ejemplo 52 o -33
	2) float: usado para valores tipo números no enteros, o con decimales, por ejemplo 832.2 (No olvidar que en programacion
	al estar el codigo en ingles, se usan puntos para representar la coma en español y viceversa)
	3) char: usado para valores tipo carácter. Un carácter es un símbolo, como los que usamos para escribir, por ejemplo ‘T’, ‘c’, ‘r’, ‘/’, ‘5’. 
	En este último caso el 5 será considerado como sólo un carácter, como sólo un símbolo y no un número.
	4) bool: usado para valores tipo booleanos, es decir, de afirmativo o negativo, cierto o falso.
	visitar: https://www.include-poetry.com/Code/C++/Introduccion/Variables/ para mas info

	Las variables pueden ser locales o globales. Las Globales son variables que se pueden usar en todo momento del codigo
	Las locales se usan solo durante una funcion
	
	Vamos a ver un ejemplo
*/
	int NumeroCinco = 5;
	int NumeroTres = 3;
	//cout << NumeroCinco + NumeroTres;

/*
	OPERADORES ARITMETICOS: 
	Para sumar = +
	para restar = -
	para multiplicar = *
	para dividir = / 
	para ver el resto = %
	Para mas informacion visitar: https://geekelectronica.com/operadores-aritmeticos-en-c/ 
*/


	/*	Caracter de cadena.Se llama string y basicamente es una serie de caracteres en cadena.si char podia tener de valor "H".String puede tener de valor "Hola mundo"
		
		Escape caracter. El mas utilizado es \n que es usado para hacer un salto de linea (Ver ejemplo de abajo)
	*/
	string HolaMundo = "¡Hola Mundo!";
	string ComoEstan = "¿Como estan?";
	//cout << HolaMundo << "\n" << ComoEstan;

/*
	FUNCIONES. Leer arriba

	LLamar una funcion:
	Para llamar una funcion se debe escribir el nombre de la funcion y entre parentesis el valor que le insertemos. 
	Por ejemplo si queremos sumar las variables anteriormente escritas NumeroCinco y NumeroTres, debemos hacer lo siguiente:
*/
	FuncionSuma(NumeroCinco, NumeroTres);

	/*
		Podemos mostrar la funcion en pantalla por ejemplo llamandola o hasta podemos crear otra variable.
	*/
	int ResultadoSuma = FuncionSuma(NumeroCinco, NumeroTres);
	//cout << ResultadoSuma;

/*
	Input y output

	Un ejemplo de output es cout que sus siglas significan. Console output.
	Input vendria ser los datos que entran. Por consola se puede pedir un dato y obtenerlo. Para hacerlo debemos usar la palabra "cin" .Vamos a Dar un ejemplo: 
	(Descomentar el codigo para probar)
*/
	//int edad; //Creamos una variable tipo int para usar cin en un futuro y almacenar un valor
	//cout << "Cual es su edad\n";
	//cin >> edad; //Edad toma el valor que el usuario imprima en pantall
	//cout << "Su edad es: " << edad;


/*
	CONDICIONALES:

	Basicamente como lo dice el nombre son condiciones. Trabaja con booleanos(Mirar seccion tipos de variables). 
	El funcionamiento es el siguiente. Se da una condicion, si esta se cumple, se ejecuta un codigo, si no se cumple se ejecuta otra codigo o no se ejecuta nada. 
	Ejemplos de condicionales: 
	x == y  Significa x igual a y
	x > y   Significa x mayor a y
	x != y  Significa x diferente a y
	x <= y  Significa x menor o igual a y


	TIPOS DE CONDICIONALES vistos: IF - IF ELSE - TERNARIO - SWITCH  

	TERNARIO:
	condicion ? resultado_verdadero : resultado_falso
	Vamos a ver un ejemplo: (Descomentar el codigo para probarlo)
*/
	// NumeroCinco < NumeroTres ? cout << "El primer numero vale menos" : cout << "El segundo numero vale menos";

/*
	IF:
	if(condicion) {
	resultado_verdadero;
}
Vamos a ver un ejemplo
*/
	//if (NumeroCinco > NumeroTres)
	//{
	//	cout << "El numero mayor es: " << NumeroCinco;
	//}


	/*
		IF ELSE: 
		Es igual al if pero se le agrega un else. ver ejemplo
	*/


	//if (NumeroCinco > NumeroTres)
	//{
	//	cout << "El numero mayor es: " << NumeroCinco;
	//}
	//else {
	//	cout << "El numero mayor es: " << NumeroTres;
	//}


	/*
		Al if se le puede agregar un else if. que evalua otra condicion. 
		ejemplo:
	*/
	//if (NumeroCinco > NumeroTres)
	//{
	//	cout << "El numero mayor es: " << NumeroCinco;
	//}
	//else if (NumeroCinco < NumeroTres) {
	//	cout << "El numero mayor es: " << NumeroTres;
	//}


	/*
		Switch:

		Se usa para evaluar un dato numerico y segun ese dato ver en que caso se cumple
	*/
	int puesto = 2;
	//switch (puesto) {
	//case 1: //Uno vendria siendo el valor a analizar para que se cumpla
	//	printf("Llego primero.");
	//	break;
	//case 2:
	//	printf("Llego segundo.");
	//	break;
	//case 3:
	//	printf("Llego tercero.");
	//	break;
	//default:
	//	printf("No ha ganado medallas.");
	//	break;
	//}

	/*
		Un agregado a los condicionales son los CONECTORES LOGICOS. Sirven para poner mas de una condicion en una misma estructura.
		Estos son AND y OR. Con AND decimos que si se completa una condicion y la otra, se ejecuta un codigo. Se escribe asi: &&.
		Con OR decimos que se cumple una condicion o la otra y se escribe asi: ||.
		Veamos ejemplos usando el condicional IF
	*/

	/*
		En el siguiente ejemplo tenemos una vida y una energia. En el if decimos que si la vida es mayor a 80 y la energia es mayor a 120, 
		tiraremos la ulti. En este caso la vida es menoor a 90, Por eso, el codigo no se ejecutara. 
	*/
	int life = 55; 
	int energy = 140; 
	
	//if (life > 80 && energy > 120) 
	//{ 
	//	cout << "Tiro la ulti.";
	//}

	/*
		En este otro ejemplo tenemos que si la vida es mayor a 80 o la energia es mayor a 120, se tirara la ulti.
		Se cumple solo una condicion, ya que la vida no es mayor a 80, pero el codigo se ejecuta igual
	*/
	//if (life > 80 || energy > 120) 
	//{ 
	//	cout << "Tiro la ulti.";
	//}



	/*
		ESTRUCTURAS ITERATIVAS(FOR Y WHILE)

		Una estructura iterativa es basicamente un loop. Un codigo que se va arepetir la cantidad de veces que le pidamos.

		TIPOS DE ESTRUCTURA ITERATIVA VISTOS: WHILE - DO WHILE - FOR

		WHILE:
		while(Condicion que si es verdadera se ejecutara un codigo) {
			codigo a ejecutar
		}
		El codigo se va a ejecutar las veces que sea necesario hasta alcanzar la condicion que pusimos a cumplir
		veamos un ejemplo
	*/

		int ovejas = 1;
		//while (ovejas < 10)
		//{
		//	cout << "Oveja numero " << ovejas << "...\n";
		//	ovejas++;
		//}
		//cout << "ZZZzzzzz....";
		/*
			Como se puede ver. En este Codigo tenemos que si el valor de la variable "ovejas" es menor a 10, se va a ejecutar el codigo
			En el hacemos una accion, que es mostrar Algo en pantalla y luego le sumamos 1 al valor de ovejas. El codigo while, se va a activar
			todas las veces necesarias hasta que ovejas tenga un valor mayor o igual a 10. 
			Al llegar a el valor 10, el Codigo no se ejecuta y pasa a lo siguiente que este escrito
		*/

	/*
		do... while: 

		Su estructura es:
		do { 
		codigo a ejecutar
		}
		while(Condicion que si es verdadera se ejecutara un codigo)

		La diferencia entre while y do-while, es que en la estructura while primero se comprueba la condición y luego se ejecuta su bloque de instrucciones; 
		mientras que do-while primero ejecuta su bloque de instrucciones y luego comprueba la condición.
		Por lo que el do while va a ejecutar si o si el codigo una vez. Despues si la condicion la cumple no lo va a volver a ejecutar

		Veamos un ejemplo
	*/
	
	//do { 
	//	cout << "Oveja numero " << ovejas << "...\n"; ovejas++;
	//} 
	//while(ovejas < 10); 
	//cout << "ZZZzzzzz....";

	/*
		ESTRUCTURA ITERATIVA FOR:

		De antemano se va a saber cuantas veces ejecutar el codigo

		estructura:
		for(inicialisacion; Condicion; Sentencia a ejecutar despues del bucle) {
			Codigo a ejecutar
		}
		
		veamos un ejemplo:
	*/

		//for (int i = 0; i < 10; i++)
		//{
		//	cout << "Soy el numero: " << i << "\n";
		//}
		/*
			Aca el inicializador toma valor de una variable que creamos llamada i(Se suele usar este nombre para referirnos a "Iteracion") la cual tiene el valor de 0.
			Luego La condicion dice que este codigo se ejecutara siempre y cuando i sea menor a 0. 
			La sentencia a ejecutar despues del bucle dice que la variable i luego de ejecutar el codigo, valdra 1 mas.
			por ultimo hay un codigo que se ejecuta que muestra que numero vale i cada vez que se itera.

			Veamos otro ejemplo mas complejo usando lo visto anteriormente con cin y cout
		*/

		int sumatoria = 0; 
		//int NumerosASumar;
		//cout << "Indique cuantos numeros quiere Sumar: \n";
		//cin >> NumerosASumar;
		//for (int i = 0; i < NumerosASumar; i++) 
		//{ 
		//	int numeroIngresado; cout << "\nIngrese un numero : ";
		//	cin >> numeroIngresado; sumatoria += numeroIngresado; 
		//}
		//cout << "\nLa sumatoria es : " << sumatoria << "\n";

		/*
			Contadores y acumuladores:
			Los contadores es basicamente lo que estuvimos viendo en las estructuras iterativas. se representan con un ++.
			Por ejemplo en el for de arriba que vimos, i++ se ejecuta despues de cualquier codigo.
			Los acumuladores Son variables que le suman un valor a otro. y se marca con +=.
			Veamos un ejemplo
		*/
		//int contador = 0;
		//for (int i = 0; i < 5; i++)
		//{
		//	contador += 5;
		//	cout << contador << "\n";
		//}


		/*
			ARREGLOS(ARRAYS):

			Es un tipo de collecion que almacena datos. Sus propiedades son:
			-Debe tener una cantidad concreta de elementos por lo que es finito. 
			-Ordenado. Cada uno de sus elementos tiene un orden que puede ser identificado por un valor llamado indice que se representa como: [i]
			-Homogeneo. Un array solo puede contener elementos del mismo tipo

			Estructura:
			Tipo_de_dato Nombre_identificador[Cantidad de elementos que tendra adentro] = {Elementos guardados};

			Los corchetes sirven para indicar que estamos hablando de un array y no una variable. 
			Un ejemplo de array seria:
			int Calificaciones[3] = {5, 23, 10};

			OPERACIONES CON ARRAYS: (Asignacion - Lectura/Escritura - Iteración)
			-ASIGNACION. Esto se trata de inicializarlo. Esto se hace dandole su tamaño. Hay dos maneras
			1) Entre corchetes poner su tamaño. No hace falta poner elemenmtos guardados en esta instancia, aunque tranquilamente se puede hacer.
			int calificaciones[3];
			2) Poner el valor de los elementos guardados. Esto tambien va a definir el tamaño de la variable.
			int calificaciones[] = {4, 10, 7};
			Como ya vimos cada espacio del array esta identificado por su indice, el cual hace referencia a la pocicion del elemento en el array.
			El Indice arranca en la posicion 0 y de ahi va avanzando de 1 en 1. En el ejemplo: int calificaciones[] = {4, 10, 7}; En la posicion 0 tenemos
			al 4, en la posicion 1 esta el numero 10 y en la posicion 2 tenemos al 7. Se accede al indice con corchetes. Ejemplo: int calificaciones[1]; 
			Estaria llamando al numero 1
			Veamos un ejemplo:
		*/
		int calificaciones[] = { 4, 10, 7 };
		//cout << calificaciones[1];

		/*
			-Operacion de Lectura/Escritura:
			la escritura Consiste en guardar valores en un array. Esto se hace indicando la posicion del mismo y luego asignando el valor. 
			Estructura: NombreArray[Posicion] = Valor asignado;
			Veamos un ejemplo
		*/
		int EjemploArray[5]; //Esto es un array con tamaño de 5 elementos
		EjemploArray[2] = 29; // Esto asignara el valor 29 al tercer elemnto del array que esta en la pocicion 2.  
		EjemploArray[0] = 3; //Esto asignara el valor 3 al primer elemento del array que esta en la posocion 0.

		/*
			La lectura consiste En justamente leer el array. Se accede con el indice [i]
			Estructura: Nombrevariable[i];

			Veamos un ejemplo:
		*/
		//cout << EjemploArray[0];
		int y = EjemploArray[2] - EjemploArray[0]; //Aca estamos creando una variable Con el resultado de la resta entre dos numeros adentro de un array
		//cout << y;

		/*
			ACCESO SECUENCIAL O ITERACION:
			Esto se basa en iterar con un for la variable para acceder a todos sus valores. (Revisar Contenido arriba sobre for)
			Veamos un ejemplo:
		*/
		int NotasParcial[] = { 4, 6, 8, 1, 9 }; 
		//for (int i = 0; i < 5; i++) 
		//{ 
		//	cout << NotasParcial[i] << "\n";
		//}

		/*
			ARREGLOS MULTIDIMENCIONALES:
			Por mas raro que parezca el nombre es bastante simple si se entendio todo hasta aca.
			Hasta ahora solo vimos arrays unidimencionales, lo que quiere decir que basicamente es un array con elementos adentro.
			Un array multidmencional es un array con uno mas arrays adentro. En la teoria que nos dieron nos definieron lo siguiente:
			"Se pueden definir tablas o matrices como arrays multidimensionales, cuyos elementos se pueden referenciar por dos, tres o más subíndices."
			Esto suena un poco engorroso y dificil de entender. Vamos a explicarlo en criollo, Pero quedense con esa parte de teoria para cuando entiendan releerla

			ARRAY BIDIMENCIONAL: se usan para hacer tablas.
			Su estructura es:
			int tabla[Cantidad de arrays][Tamaño de cada uno de los arrays];
		*/
		int tabla[4][3]; 
		/*
			Para entender graficamente lo que estamos haciendo en este array de arriba se puede contemplar el siguiente grafico: https://1.bp.blogspot.com/-iKrevuOOSrA/We0Kfxg0K3I/AAAAAAAAAt4/0K_c9ccc6s4ZO2TFvP8ofr9OSHJJbE4DQCLcBGAs/s1600/array%2Bbidi.png
			Esta imagen es el equivalente visual de este array que acabamos de crear.
			Para Iterar sobre el array entero y escribirle valores se usa un doble for. Usando la imagen adjuntada, Podemos ver que tenemos filas(Rows) y columnas(Columns)
			En el array de tabla tenemos 4 filas(rows) y 3 columnas(columns). No olvidemos que las filas son arrays. En el ejemplo de arriba podemos ver
			que hay 4 filas, Osea 4 arrays, con 3 columnas. osea 3 elementos cada una. 
		*/
		int contadorParaSumar = 0;
		for (int row = 0; row < 4; row++)
		{
			
			for (int column = 0; column < 3; column++)
			{
				contadorParaSumar++;
				tabla[row][column] = contadorParaSumar;
				//cout << tabla[row][column] << "\n";
			}
		}

		/*
			CADENAS DE CARACTERES: STRINGS
		*/
}