#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Hola mundo");

    int variable=3;
    int *punt=&variable;
    printf("La direccion de memoria almacenada por el puntero es %d",punt);
    printf("\nEl contenido del puntero es: %d",*punt);
    printf("\nLa direccion de memoria del puntero es:%d",&punt);
    printf("\nLa direccion de memoria de la variable es:%d",&variable);
    int tama=sizeof(variable);
    printf("\nEl tamaño de memoria almacenado por la variable es %d",tama);
    return 0;

aaa
}