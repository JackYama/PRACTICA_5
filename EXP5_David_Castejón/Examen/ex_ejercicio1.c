#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Author: Jacob Navarro y David Castejón
int main() {

	int inventario [2][3][4][5][10];
	//esto significa "2" debido a que tenemos dos continenes
	//"3" de 3 sedes por continente
	//"4" categorias de producto por sede
	//"5" modelos de categoria
	//"10" lotes por modelo
	
	// En América (continente 0), en la primera sede (sede 0), en la categoría de televisores (categoría 0), el modelo 0, en el lote 0, hay 50 unidades.
		inventario[0][0][0][0][0] = 50;
	
	// // En Europa (continente 1), en la segunda sede (sede 1), en la categoría de teléfonos (categoría 1), el modelo 3, en el lote 2, hay 120 unidades.
		inventario[1][1][1][3][2] = 120;
	


	    // Asignamos algunos valores
	 	inventario[0][0][0][0][0] = 50;
	 	inventario[1][1][2][0][10] = 200;// 200 unidades del décimo lote de la segunda categoría de televisores en la sede intermedia de Europa.
	        inventario[0][2][3][4][9] = 75;
	        inventario[1][0][2][1][5] = 200;
	        inventario[0][1][1][2][7] = 90;
	// Mostramos las cantidades en pantalla                                     
	printf("América, Sede 1, Televisores, Modelo 0, Lote 0: %d unidades\n", inventario[0][0][0][0][0]);
	printf("Europa, Sede 2,Televisores, Modelo 0, Lote 10: %d unidades\n", inventario[1][1][2][0][10]);
	printf("América, Sede 3, Electrodomésticos, Modelo 4, Lote 9: %d unidades\n", inventario[0][2][3][4][9]);
	 printf("Europa, Sede 1, Ordenadores, Modelo 1, Lote 5: %d unidades\n", inventario[1][0][2][1][5]);
	 printf("América, Sede 2, Teléfonos, Modelo 2, Lote 7: %d unidades\n", inventario[0][1][1][2][7]);
	   
	 int num;
	       printf("Introduce una cantidad para incrementar las unidades de televisor: ");
	       scanf("%d",&num);//Esto para que el usuario ingrese el número

	return 0;	    
}
	                                  
	   
	    
 
