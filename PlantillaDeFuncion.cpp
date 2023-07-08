//Plantillas de funciones....(Teoria minima)
//Si tenemos un grupo de funciones que practicameente hacen lo mismo
//con tipos de datos diferentes, entonces se debe pensar en la creacion
//de una funcion generica.
//Imaginese que se tiene una sobrecarga de la funcion "mayor". Es decir
//que existen varas funciones "mayor" que deben de recibir tipos de datos 
//diferentes, en un caso podria recibir enteros, en otro caso podrian
//recibir doubles, o char en otro caso. En cada caso hay que hacer una
//funcion muy similar pero con tipos de datos diferentes.
//Para este caso la funcion sobrecargada lo que hace es recibir dos
//parametros y compararlos y retorna el mayor de ellos.
//Podemos en este caso tomar todas esas funciones que es la sobrecarga 
//de la funcion mayor y dejar solo una, una sola funcion generica o
//como la estamos llamando Plantilla de funcion.


//Una funcion generica sirve para realizar la misma tarea con tipos de
//datos distintos.
//Asi existe una mejor reutilizacion del codigo  y el codigo es menos 
//propenso a errores.

#include <iostream>
using namespace std;


//Plantilla de funcion
template<class T> //T, D, UNTIPO
T mayor(T , T );

int main() {
	//Variables de entorno
	int x = 2, y = 7;
	double k = 7.8, l = 6.3;
	char letra1 = 'a', letra2 = 'u';

	cout << "------Trabajando con Mayores------" << endl;
	cout << "El mayor de 'x' y 'y' es: " << mayor(x, y) << endl;
	cout << "El mayor de 'k' y 'l' es: " << mayor(k, l) << endl;
	cout << "La mayor letra entre letra 1 y letra2 es: " << mayor(letra1, letra2) << endl;

	system("pause");
	return 0;
}


template<class T> 
T mayor(T a, T b) { //Funcion generica...
	if (a > b)
		return a;
	else
		return b;
}


