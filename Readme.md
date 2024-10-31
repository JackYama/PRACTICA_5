# Resumen del Código en C: Gestión de Temperaturas Semanales

Este código está diseñado para realizar la entrada, el procesamiento y la visualización de datos de temperatura para cada día de la semana. El programa calcula la temperatura promedio, identifica las temperaturas máxima y mínima, y cuenta los días que superan el promedio.

## Estructura del Código

### Definiciones y Constantes
- **Constante `dias_semana`**: Representa el número de días de la semana (7).
- **Arreglos**: `temperaturas[]` para almacenar las temperaturas y `dias[]` para el nombre de los días de la semana.

### Funciones
1. **ingresarTemperaturas**  
   Solicita al usuario la temperatura para cada día de la semana. Devuelve el arreglo `temperaturas[]` con los datos ingresados.

2. **calcularPromedio**  
   Calcula el promedio de las temperaturas almacenadas en `temperaturas[]`.

3. **encontrarMaxMin**  
   Encuentra y devuelve las temperaturas máxima y mínima en la semana. También asigna los índices correspondientes a las variables `maxDia` y `minDia` para saber en qué días ocurrieron.

4. **contarDiasSuperiores**  
   Cuenta y devuelve el número de días en los que la temperatura supera el promedio semanal.

5. **listarDiasInferiores**  
   Muestra los días de la semana con temperaturas por debajo del promedio.

### Variables Principales
- **`float* temperaturas`**: Almacena las temperaturas ingresadas por el usuario.
- **`float promedio`**: Contiene el valor promedio de las temperaturas.
- **`float* maxMin`**: Almacena las temperaturas máxima y mínima.
- **`int maxDia, minDia`**: Días en los que ocurren la temperatura máxima y mínima, respectivamente.

### Funcionamiento del Programa

1. **Ingreso de Datos**: El programa solicita al usuario la temperatura promedio para cada día de la semana.
2. **Cálculo del Promedio**: Se calcula la temperatura promedio.
3. **Identificación de Máximos y Mínimos**: El programa determina las temperaturas máxima y mínima y los días en que ocurrieron.
4. **Conteo de Días Superiores al Promedio**: Se cuenta el número de días con temperaturas superiores al promedio.
5. **Listado de Días Inferiores al Promedio**: Se muestra una lista de los días con temperaturas por debajo del promedio.

### Problemas y Observaciones
- Existen algunos errores de sintaxis y de tipo, como `float temperaturas[dias_semana]` definido dos veces y `DIAS_SEMANA` en lugar de `dias_semana`.
- La función `listarDiasInferiores` no tiene un valor de retorno definido.

### Autores
- Jacob Navarro Llamazares
- David Castejón García
