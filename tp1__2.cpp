#include <stdio.h>
#include <stdlib.h>

int fncuadrado(int num);
void fncuadrado(int *num);
void fninvertir(int *a, int *b);
void fnordenar(int *a, int *b);
int main(){
    int a=10;
    int b=0;
    int num;
printf("Ingrese un numero\n");
scanf("%d",&num);
fncuadrado(&num);
printf("El cuadrado de num es %d\n",num);
printf("El contenido de la variable num es %d y la direccion de memoria %d\n",num,&num);
printf("variables sin invertir: a=%d, b=%d\n",a,b);
fninvertir(&a,&b);
printf("variables con invertir: a=%d, b=%d\n",a,b);
fnordenar(&a,&b);
printf("La menor es %d y la mayor es %d\n",a,b);


return 0;

}

int fncuadrado(int num){
    int cuadrado=num*num;
    return cuadrado;
}
void fncuadrado(int *num){
    *num*=*num;
}
void fninvertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void fnordenar(int *a, int *b){
    int aux;
    if(*a>=*b){
        aux=*a;
        *a=*b;
        *b=aux;
    }

}