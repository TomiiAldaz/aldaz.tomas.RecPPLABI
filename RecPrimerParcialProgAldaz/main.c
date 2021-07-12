#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char procesador[];
    char marca[];
    float precio;
}Notebook;


int aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);
int ordenarNotebook(Notebook n);

int main()
{
    printf("Hello world!\n");
    return 0;
}

float aplicarDescuento(float precio)
{
    float precioConDescuento;
    float precioFinal;

    precioConDescuento = (precio * 5) / 100;
    precioFinal = precio - precioConDescuento



    return precioFinal;
}


int contarCaracteres(char cadena[], char caracter)
{
    int tam = strlen(cadena);
    int contador = 0;
    if(cadena != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(caracter == cadena[i])
            {
                contador++;
            }
        }
    }


    return contador;
}

//int ordenarNotebook(Notebook n, int tam)
//{
//    int todoOk = 0;
//    int tam;
//    char auxCad;
//    int auxPrecio;
//
//    if( n != NULL)
//    {
//
//        for(int i=0; i < tam-1; i++)
//        {
//            for(int j=i+1; j < tam; j++)
//            {
//                if(strcmp(n[i].marca, n[j].marca) < 0 || (strcmp(n[i].marca, n[j].marca) == 0 && n[i].precio > n[j].precio))
//                {
//
//                }
//            }
//
//        }
//    }
//}
