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

	at* ingresarTemperaturas(char dias[][10]) {
		static float temperaturas[DIAS_SEMANA];
		for (int i = 0; i < DIAS_SEMANA; i++) {
			printf("Ingresa la temperatura promedio del %s: ", dias[i]);
			scanf("%f", &temperaturas[i]);
		}
		return temperaturas;
	}

	float calcularPromedio(float temperaturas[]) {
		float suma = 0.0;
		for (int i = 0; i < DIAS_SEMANA; i++) {
			suma += temperaturas[i];
		}
		return suma / DIAS_SEMANA;
	}

	float* encontrarMaxMin(float temperaturas[], int *maxDia, int *minDia) {
		static float maxMin[2];
		maxMin[0] = temperaturas[0];  maxTemp
			maxMin[1] = temperaturas[0];  minTemp
			*maxDia = 0;
		*minDia = 0;

		for (int i = 1; i < DIAS_SEMANA; i++) {
			if (temperaturas[i] > maxMin[0]) {
				maxMin[0] = temperaturas[i];
				*maxDia = i;
			}
			if (temperaturas[i] < maxMin[1]) {
				maxMin[1] = temperaturas[i];
				*minDia = i;
			}
		}
		return maxMin;
	}

	int contarDiasSuperiores(float temperaturas[], float promedio) {
		int dias_superiores_promedio = 0;
		for (int i = 0; i < DIAS_SEMANA; i++) {
			if (temperaturas[i] > promedio) {
				dias_superiores_promedio++;
			}
		}
		return dias_superiores_promedio;
	}

	void listarDiasInferiores(float temperaturas[], float promedio, char dias[][10]) {
		printf("Días con temperaturas por debajo del promedio:\n");
		for (int i = 0; i < DIAS_SEMANA; i++) {
			if (temperaturas[i] < promedio) {
				printf("%s: %.1f°C\n", dias[i], temperaturas[i]);
			}
		}
	}
	return 0;
}
