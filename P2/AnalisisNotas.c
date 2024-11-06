#include <stdio.h>
#include <stdlib.h>
//Author Jacob Navarro and David Castejon

// primero entendemos que estamos hablando de notas por lo que lo primero para separar entre suspenso o aprobado definimos que la nota minima de aprobado es "5.0"
#define Nota_min 5.0

//definimos la estructura del estudiante y lo que define dentro
struct Estudiante{
	int ID
       	double nota	
};
int main{
	//aqui pedimos al cliente que ingrese el numero de estudiantes y con un scanf cogemos el numero que nos de el cliente
	int num_estudiantes;
		printf("Ingresa el numero de estudiantes:");
		scanf("%d",&num_estudiantes)
		
			//declaramos un array sobre los estudiantes
			//este array lo que hara es almacenar todos los datos que introduzca el cliente para luego poder explorarlos y consultarlos para cualquier función que definamos

	Estudiante estudiantes[num_estudiantes]
	
	//ahora lo que queremos definir es que el cliente nos ingrese la nota de cada estudiante
	
	for (int i = 0; i < num_estudiantes; i++) {
		estudiantes[i].id = i + 1; // Asignar ID único al estudiante
		//aqui pedimso que ingrese el numero el cliente
		printf("Ingrese la nota final del estudiante %d: ", estudiantes[i].id);
		//y aqui lo escaneamos y almacenamos
		scanf("%lf", &estudiantes[i].nota);
}
//ahora al ya tener las notas introducidas y metidas dentro de nuestro array ahora queremos definir la función de como vamos a calcular el promedio de las notas
// Cálculo del promedio
double suma = 0.0;  // Variable para almacenar la suma de las notas
	for (int i = 0; i < num_estudiantes; i++) {
        suma += estudiantes[i].nota;  // Sumamos las notas de todos los estudiantes
}
   	
	double promedio = suma / num_estudiantes;  // Calculamos el promedio
		printf("Promedio de notas: %.2f\n", promedio);  // Mostramos el promedio con 2 decimales
//                                  
