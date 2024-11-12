
//Autor:Jacob Navarro Llamazares,David Castejón García
#define dias_semana 7

int main(){
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct dias{//estructura de dias en el cual configuramos la temperatura de cada dia y el nombre del mismo
			float temperatura;
				char nombre[10];
	};

	float promedio_semana(float a[10]){ //Calcula el promedio de la temperatura de la semana, a traves de sumar todas las temperaturas introducidas y luego dividiendolas entre los dias correspondientes
	float suma = 0;
		for (int i = 0; i<7; i++){
		suma = suma + a[i];
	}
        float promedio = suma / 7;
		return promedio;
	}
	int temperatura_max(float a[10]){ //Calcula la temperatura máxima de la semana 
	int imax = 0; //primeramente con este 0 lo que hacemos es asociar que la primera temperatura maxima con la que contamos es del dia 0, osea la temperatura mas alta que tenemos es del dia 0
		for (int i = 1; i < 7; i++){// luego con este for procede a recorrer todos los dias que introducimos, excepto el primero ya que se asume como el valor mas alto incialmente
			if(a[i] > a[imax]){// luego en este if lo que hacemos es decirle a la función que el primer numero que supere a ese 0 del primer dia pasa a ser nuestra temperatura maxima
				imax = i;
		}
	}
	return imax;													}
	int temperatura_min(float a[10]){//Calcula la temperatura mínima de la semana (funcionamiento similar a la temperatura maxima, solamente que sera "imin" y pondra como minimo la temperatura que mas se acerque a la primera temperatura minima que hemos establecido, osea 0)
	int imin = 0;
		for (int i = 1; i < 7; i++){
			if(a[i] < a[imin]){
				imin = i;
																																}
	}
	return imin;

	} int contador_dias(float a[10]){ //Cuenta los días en los que la temperatura es mayor a la del promedio, por lo que se llama a la función promedio semana para que cuando una temperatura supere este promedio se sume al contador
		int contador = 0;												    
			for (int i = 0; i < 7; i++){
			if (a[i] > promedio_semana(a)){
					    																																				contador ++;																																						}
	}
					 																																							return contador;
					    																																				}
float listado_dias(struct dias semana[], float prom){ //Cuenta los días en los que la temperatura es menor a a la del promedio
	printf("Dias con temperaturas por debajo del promedio:\n");
		for (int i = 0; i < 7; i++){													
			if (semana[i].temperatura < prom){
				printf("%s - %.1fºC\n", semana[i].nombre, semana[i].temperatura);
					    																																										}
					 												}
																 } 
																												int main(){//dentro del main ya solo nos queda hacer llamadas a las funciones que hemos ido realizando.
																													struct dias semana[7]; //Este struct tiene definido los días de la semana que son 7, esto lo hacemos para poder atribuirle un numero a cada dia y poder emplearlas en nuestras funciones
			strcpy(semana[0].nombre, "Lunes");									    
			strcpy(semana[1].nombre, "Martes");
			strcpy(semana[2].nombre, "Miércoles");
			strcpy(semana[3].nombre, "Jueves");
			strcpy(semana[4].nombre, "Viernes");
			strcpy(semana[5].nombre, "Sábado");
		        strcpy(semana[6].nombre, "Domingo");
			
			for (int i=0; i<7; i++){ //Mete los datos recogidos por el usuario para sacar la temperatura media 				
			printf("Temperatura media del %s: ", semana[i].nombre);
			scanf(" %f", &semana[i].temperatura);
		}	
			float temperaturas[10]; //Guarda todas las temperaturas dadas por el usuario						
			for (int i=0; i<7; i++){
			temperaturas[i] = semana[i].temperatura;																				    
			float media = promedio_semana(temperaturas); //En float media guardamos la temperatura media de la semana
			printf("La temperatura media de la semana es: %.1fºC\n", media);					
			
			int imax = temperatura_max(temperaturas); //Saca el indice de la temperatura máxima
			printf("Temperatura máxima: %.1fºC el dia %s\n", temperaturas[imax], semana[imax].nombre);
																																																						         int imin = temperatura_min(temperaturas); //Saca el indice de la temperatura minima, si sale dos corresponde al miércoles.
		       printf("Temperatura mínima: %.1fºC el dia %s\n", temperaturas[imin], semana[imin].nombre);
		
		
		        int dias = contador_dias(temperaturas);
			printf("Hay %d dia/s superior/es a la media.\n", dias);
			listado_dias(semana, media);
					    
					   																																																																											return 0;
					    
					   																																																																															}
}


