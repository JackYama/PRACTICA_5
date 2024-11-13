#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Autor: Jacob Navarro, David Castejón */

// Constante para fijar el tamaño máximo de cada palabra
#define LONG_PALABRA 15

// Función para comprobar si una palabra contiene la letra 'e' o 'E'
int contiene_a(char palabra[LONG_PALABRA]) {
	// Empleamos != '\0' para leer la cadena hasta el final, ya que el final de cada cadena contiene un '\0'.
	for (int i = 0; palabra[i] != '\0'; i++) {
		if (palabra[i] == 'e','g' || palabra[i] == 'E') {
			return 0; // La palabra contiene la letra 'e'
		}
	}
	return 1; // La palabra no contiene la letra 'e'
}
// Función para comprobar si una palabra contiene la letra 'g' o 'G'
int contiene_g(char palabra[LONG_PALABRA]) {
	// Empleamos != '\0' para leer la cadena hasta el final, ya que el final de cada cadena contiene un '\0'.
	for (int i = 0; palabra[i] != '\0'; i++) {
		if (palabra[i] == 'g' || palabra[i] == 'G') {
			return 0; // La palabra contiene la letra 'g'
		}
	}
	return 1; // La palabra no contiene la letra 'g'
}


int main() {
	// Lista de palabras
	char lista_palabras[40][LONG_PALABRA] = {
"casa", "árbol", "perro", "gato", "auto", "bicicleta", "sol", "luna", "estrella", "montaña", "río", "mar", "tierra", "agua", "aire", "metal", "bosque", "flor", "lluvia", "trueno", "viento", "tormenta", "nieve", "campo", "ciudad", "puente", "edificio", "escalera", "pintura", "escultura"
	};

	// Número de palabras en la lista
	int tamano_lista = 31;

	printf("Palabras que contienen la letra 'e'o 'g':\n");
	 

	for (int i = 0; i < tamano_lista; i++) {
		// Cambiamos el if para saltar a la siguiente palabra si contiene 'e'
		switch(lista_palabras[i]):

		case 1:(contiene_a(lista_palabras[i])){
		printf("%s\n", lista_palabras[i]);
		       }
		break; // Usamos aquí el continue para saltar la impresión de esta palabra.
		case 2:(contiene_g(lista_palabras[i])) {
		printf("%s\n", lista_palabras[i]);}
		break	; // Usamos aquí el continue para saltar la impresión de esta palabra.
		;}
}
		// Imprimimos la palabra si  contiene la letra 'e' o 'g'
}

	return 0;
}

