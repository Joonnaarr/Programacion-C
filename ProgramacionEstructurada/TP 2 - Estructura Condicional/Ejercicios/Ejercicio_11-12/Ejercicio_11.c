#include <stdio.h>
#include <stdlib.h>

/* 11. Ingresar el sueldo, categor�a y antig�edad de un empleado, calcular el sueldo final de cada uno de ellos, 
si el empleado es de la categor�a 1 se le adicionara $50 por cada a�o de antig�edad */

/* 12. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad */

int main(int argc, char *argv[]) {
	int sueldo, categoria, antiguedad;
	int categoriaUno=1; 
	int adicional=50; 
	int adicionalSuma, adicionalCat, extraAntiguedad, sueldo5;
	int i;
	int suma;
	int total;
	
	for (i=1;i<=1;i++){
		printf("\nIngrese su sueldo: "); 
		scanf("%d", &sueldo);
		suma = sueldo + suma;
		total = suma;
		printf("Ingrese su categoria: "); 
		scanf("%d", &categoria);
		printf("Ingrese su antiguedad: "); 
		scanf("%d", &antiguedad);
		
		if (categoria==1){
			adicionalSuma = sueldo + adicional;
			adicionalCat = adicional * antiguedad;
			}	
		if (antiguedad>=5){
			sueldo5 += sueldo;
		}
		else {
			printf("No aplico a ninguna escala");
		}
	extraAntiguedad = adicionalSuma + adicionalCat;
		
	}
	
	printf("\nSueldo: %d", sueldo);
	printf("\nExtra por categoria y antiguedad: %d", extraAntiguedad);
	printf("\nTotal:  %d", (sueldo+extraAntiguedad) -1) ;
	printf("\nEl sueldo de por los 5 anios de antiguedad es: %d", sueldo5);
	
	return 0;
}
