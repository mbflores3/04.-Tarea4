#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//***************************************************************************************************
// EL CÓDIGO PERMITE AGREGAR N SENSORES POR LO QUE LA PARTE 1.1 VIENE IMPLICITA POR INPUT DEL USUARIO
//***************************************************************************************************

typedef struct Sensor
{
    int ID_sensor;
    char sensor[10];
    char tipo[10];
    float max_temperatura;
    float diametro;
} Sensor;

int imprimir_caracteristicas ( Sensor sensores[], int n)
{
    int i;
    for (i = 0; i < n; ++i) {
        printf ("\n************************************\n");
        printf ("LAS CARACTERISTICAS DEL SENSOR %d SON\n", i+1);
        printf ("************************************\n");
        printf ("\nLa ID del sensor es: %d \n", sensores[i].ID_sensor);
        printf ("\nEl sensor es: %s\n", sensores[i].sensor);
        printf ("\nEl tipo de sensor es: %s \n", sensores[i].tipo);
        printf ("\nLa temperatura máxima que soporta el sensor es: %f ºC\n", sensores[i].max_temperatura);
        printf ("\nEl diametro del sensor es: %f cm\n", sensores[i].diametro); 
    }
    return 0;
}

int main()
{
    int n, i;
    printf ("\nIngrese la cantidad de sensores que agregará: ");
    scanf("%d",&n);
    struct Sensor sensores[n];
    for (i = 0; i < n; ++i) {
        //char nombre_sensor;
        //printf ("\nIngrese el nombre del sensor: ");
        //scanf("%c",&nombre_sensor);
        int ID_sensor;
        printf ("\nIngrese la ID del sensor %d: ", i+1);
        scanf("%d",&ID_sensor);
        char sensor[10];
        printf ("\nIngrese el sensor %d: ", i+1);
        scanf("%s",&sensor[10]);
        char tipo[10];
        printf ("\nIngrese el tipo del sensor %d: ", i+1);
        scanf("%s",&tipo[10]);
        float max_temperatura;
        printf ("\nIngrese la temperatura máxima que soporta el sensor %d (en ºC): ", i+1);
        scanf("%f",&max_temperatura);
        float diametro;
        printf ("\nIngrese el diametro del sensor %d(en mm): ", i+1);
        scanf("%f",&diametro);

        Sensor sensor1 = {
        .ID_sensor = ID_sensor, 
        .sensor = sensor[10],
        .tipo = tipo[10], 
        .max_temperatura = max_temperatura, 
        .diametro = diametro
        };
        sensores[i] = sensor1;
    }

    imprimir_caracteristicas( sensores, n );
    return 0;
}