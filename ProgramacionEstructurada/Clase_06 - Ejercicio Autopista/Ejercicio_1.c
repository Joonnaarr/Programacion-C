#include <stdio.h>

#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* funciones implementan c�digo que necesariamente se repite muchas veces

 Dentro del lenguaje C es necesario declararlo, implementarlo e instanciarlo


La declaraci�n tiene la forma de una variable acompa�ado de parentesis obligatorios

los cuales pueden indicar la necesidad de recibir alg�n tipo de par�metro


 int suma(int, int); //declarar la funci�n

//siempre se declara antes del Main

int suma(); //la �ltima linea return


void suma(float, int);

*/

//int suma();  //declaraci�n



int suma(int valor1 ,int valor2)   // implementar la funci�n
{
return valor1+valor2;
}
int resta(int V1 ,int V2)   // implementar la funci�n
{
return V1-V2;
}
int multiplica(int V1 ,int V2)   // implementar la funci�n
{
return V1*V2;
}

float divide(int V1 ,int V2)   // implementar la funci�n

{

if(V1!=0 && V2!=0)

{

printf("El cociente es %f",(float)V1/V2);

return (float)V1/V2;

}

printf("\n Uno de los valores es 0");

return 0;

}


void muestra(int res)

{

printf("\n El resultado es %d ",res);

}



void muestraf(float res)

{

printf("\n El resultado del valor flotante es %.2f ",res);

}


int main(int argc, char *argv[]) 

{

  

muestra(multiplica(suma(100,suma(10,4)),resta(30,20)));

muestra(resta(20,20));

muestra(multiplica(20,20));

muestraf(divide(2,3));



/* printf("\nEl resultado de la suma es: %d",suma(15,40));


printf("\nEl resultado de la suma es: %d",suma(50,45));


*/

return 0;

}







}
