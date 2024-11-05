#include <stdio.h>
#include <stdlib.h>

//Autor:Jacob Navarro Llamazares,David Castejón García

#define dias_semana 7

int main(){

	float temperatura[dias_semana]; 
	char dias[dias_semana][15] = {
		"Lunes: ", "Martes: ", "Miércoles: ","Jueves: ","Viernes: ","Sábado: ","Domingo: "
	};

	//Ingreso de datos
	for (int i = 0; i < dias_semana; i++){
		printf("Ingresa la temperatura promedio del %s", dias[i]);	
		scanf("%f", &temperatura[i]);



}
	
	return 0;
}
