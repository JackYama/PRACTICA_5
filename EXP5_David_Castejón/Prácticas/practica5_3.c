#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Author: David Castejón y Jacob Navarro


// Definir el tamaño máximo para el nombre del producto y la cantidad máxima de productos
#define MAX_NOMBRE 20
#define MAX_PRODUCTOS 10


//ponemos typedef struct con el nombre despues de cerrar corchete para no tener que repetir la palabra struct dentro de el main, este strcut se encargará de contener la información de los productos.
typedef struct {
	char nombre[MAX_NOMBRE];
	int cantidad;
} Producto;

// Función para comparar cadenas de caracteres; usamos esta función en sustitución de strcmp(comando que compara cadenas de caracteres)
int compararCadenas(char cadena1[], char cadena2[]) {
	int i = 0;// Compara carácter por carácter hasta encontrar una diferencia o llegar al final de ambas cadenas
	while (cadena1[i] != '\0' && cadena2[i] != '\0') {//recuerdo que empleamos el termino '\0' para que se lea toda la cadena de caracteres, ya que al final de cada cadena hay un '\0'
		if (cadena1[i] != cadena2[i]) {
			return 0;
		}
		i++;
	}//Esto valora que si ambas cadenas terminan al mismo tiempo son iguales
	return (cadena1[i] == '\0' && cadena2[i] == '\0');
}
	// Función para ingresar productos en el inventario
	int ingresarProductos(Producto inventario[], int numProductos) {
		for (int i = 0; i < numProductos; i++) {
			printf("Ingrese el nombre del producto %d: ", i + 1);
			scanf("%s", inventario[i].nombre);
			printf("Ingrese la cantidad en stock de %s: ", inventario[i].nombre);
			scanf("%d", &inventario[i].cantidad);
		}
		return numProductos;//Va a devolver el número de productos ingresados
	}

	// Función para mostrar el inventario completo
	int mostrarInventario(Producto inventario[], int numProductos) {
		printf("\nInventario Completo:\n");
		for (int i = 0; i < numProductos; i++) {
			printf("Producto %d: %s - %d unidades\n", i + 1, inventario[i].nombre, inventario[i].cantidad);
		}
		return 0;
	}

	// Función para reabastecer productos
	int reabastecerProducto(Producto inventario[], int numProductos) {
		char nombreProducto[MAX_NOMBRE];
		int cantidadaAgregar;
		int encontrado = 0;//sirve para saber si el podructo a reabastecer que ingresamos lo hemos puesto o no en la lista de productos.

		printf("Ingrese el nombre del producto a reabastecer: ");
		scanf("%s", nombreProducto);

		for (int i = 0; i < numProductos; i++) {
			if (compararCadenas(inventario[i].nombre, nombreProducto)) {
				printf("Ingrese la cantidad a añadir a %s: ", nombreProducto);
				scanf("%d", &cantidadaAgregar);
				inventario[i].cantidad += cantidadaAgregar;//Esto hace que al reabastecer el prod, se actualice el inventario
				encontrado = 1;
				break;
			}
		}

		if (!encontrado) {//Esto sirve para hacer lo contrario si se cumple la condición, lo usamos gvarias veces a lo largo del código
			printf("Producto no encontrado.\n");
		}
		return encontrado;// Devolvera 1 si el producto fue encontrado y reabastecido, 0 en caso contrario
	}

	// Función para mostrar productos en baja existencia
	int mostrarBajaExistencia(Producto inventario[], int numProductos) {
		int hayBajaExistencia = 0;//Funciona igual que el encontrado en la función de reabastecimiento, es como una bandera
		printf("\nProductos en baja existencia (menos de 5 unidades):\n");
		for (int i = 0; i < numProductos; i++) {
			if (inventario[i].cantidad < 5) {
				printf("%s - %d unidades\n", inventario[i].nombre, inventario[i].cantidad);
				hayBajaExistencia = 1;
			}
		}
		if (!hayBajaExistencia) {
			printf("No hay productos en baja existencia.\n");
		}
		return hayBajaExistencia;//Igual que en la función de reabastecimiento devolvera 1 si hay productos de baja existencia y 0 en el otro caso.
	}

	// Función para buscar un producto por nombre
	int buscarProducto(Producto inventario[], int numProductos) {
		char nombreProducto[MAX_NOMBRE];
		int encontrado = 0;//Igual que en las funciones anteriores es como un checkpoint

		printf("Ingrese el nombre del producto a buscar: ");
		scanf("%s", nombreProducto);

		for (int i = 0; i < numProductos; i++) {
			if (compararCadenas(inventario[i].nombre, nombreProducto)) {
				printf("Cantidad en stock de %s: %d unidades\n", nombreProducto, inventario[i].cantidad);
				encontrado = 1;//Producto encontrado
				break;
			}
		}

		if (!encontrado) {
			printf("Producto no encontrado.\n");
		}
		return encontrado;// Devolver 1 si el producto fue encontrado, 0 en caso contrario como en las anteriores funciones
	}

	int main() {
		Producto inventario[MAX_PRODUCTOS];
		int numProductos;
		char opcion[3];

		printf("Ingrese el número total de productos (máximo %d): ", MAX_PRODUCTOS);
		scanf("%d", &numProductos);

		ingresarProductos(inventario, numProductos);
		mostrarInventario(inventario, numProductos);

		while (1) {
			printf("\n¿Desea reabastecer algún producto? (sí/no): ");
			scanf("%s", opcion);
			if (compararCadenas(opcion, "no")) {
				break;
			}
			reabastecerProducto(inventario, numProductos);
			mostrarInventario(inventario, numProductos);
		}

		mostrarBajaExistencia(inventario, numProductos);

		buscarProducto(inventario, numProductos);

		return 0;
	}
/*Podríamo haber hecho de varias formas distintas el formato de salida, podríamo haber hecho otro bucle para la busqueda de productos y preguntar al usuario si quiere seguir buscando productos o no; también podríamos haber usado comandos de cadenas más avanzados pero no los dominamos muy bien todavia.
 * */
