#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Autor: Jacob Navarro, David Castejón */

// Constante para fijar el tamaño máximo de cada palabra
#define LONG_PALABRA 15

// Función para comprobar si una palabra contiene la letra 'a' o 'A'
int contiene_a(char palabra[LONG_PALABRA]) {
	// Empleamos != '\0' para leer la cadena hasta el final, ya que el final de cada cadena contiene un '\0'.
	for (int i = 0; palabra[i] != '\0'; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A') {
			return 1; // La palabra contiene la letra 'a'
		}
	}
	return 0; // La palabra no contiene la letra 'a'
}

int main() {
	// Lista de palabras
	char lista_palabras[10][LONG_PALABRA] = {
		"Tokyo",
		"Madrid",
		"Barcelona",
		"Berlin",
		"Valencia",
		"Roma",
		"Dublin",
		"Luxemburgo"
	};

	// Número de palabras en la lista
	int tamano_lista = 8;

	printf("Palabras que no contienen la letra 'a':\n");

	for (int i = 0; i < tamano_lista; i++) {
		// Cambiamos el if para saltar a la siguiente palabra si contiene 'a'
		if (contiene_a(lista_palabras[i])) {
			continue; // Usamos aquí el continue para saltar la impresión de esta palabra.
		}
		// Imprimimos la palabra si no contiene la letra 'a'
		printf("%s\n", lista_palabras[i]);
	}

	return 0;
}

