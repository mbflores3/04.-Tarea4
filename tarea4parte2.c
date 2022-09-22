#include <stdio.h>
#include <string.h>
#include <time.h>

#define tam 10

static int hastable[tam];

//  funcion inicial
int *funcion_inicial(void){
    int i;
    printf("\nArreglo inicial\n");
    for (i=0; i < tam; i++) {
        hastable[i] = -1;
        printf("arr[%d] = %d\n", i, hastable[i]);
    }
    printf("\n");
    return hastable;
}

//  funcíon de escritura
//  No se puede poner solo el numero de posición 
void escriturahash(int n){
    if ( hastable[n] == -1 ) {
        printf("Actualizando el valor de la posición arr[%d]\n", n);
        hastable[n] = n;
    }
    else{
        printf("Colisión! No se puede guardar el dato\n");
    }
}

// funcion impresion
void funcion_impresion(void){
    int i;
    printf("\nImprimiendo valores\n");
    for (i=0; i < tam; i++) {
        printf("arr[%d] = %d\n", i, hastable[i]);}
    printf("\n");
}
    
// funcion eliminar
void funcion_eliminar(int n){
    if ( hastable[n] == -1 ) {
        printf("No existe un dato en esta posicion, intenta de nuevamente\n");
    }
    else {
        hastable[n] = -1;
        printf("Dato borrado con exitosamente\n");    
    }
}

// funcion busqueda
void funcion_busqueda(int n){
    printf("\nArr[%d] = %d\n", n, hastable[n]);
}

int main(){
    int *hastable = funcion_inicial();
    while (1) {
        int op;
        int n;
        printf ("\nIngrese la acción que desea realizar\n");
        printf ("1) Escribir un dato \n");
        printf ("2) Eliminar un dato \n");
        printf ("3) Buscar un dato \n");
        printf ("4) Imprimir todos los datos \n");

        scanf("%d",&op);
        switch (op)
        {
            case 1:
                printf("\nIngrese la posición donde desea escribir el dato: ");  
                scanf("%d", &n); 
                escriturahash(n);
                break;
            case 2:
                printf("\nIngrese la posición donde desea eliminar el dato: ");  
                scanf("%d", &n); 
                funcion_eliminar(n);
                break;
            case 3:
                printf("\nIngrese la posición del dato que desea encontrar: ");  
                scanf("%d", &n); 
                funcion_busqueda(n);
                break;
            case 4:
                funcion_impresion();
                break;
        }
    }
    return 0;
}