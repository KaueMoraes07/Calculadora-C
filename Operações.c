#include <stdio.h>
#include <stdlib.h>
#include "Operações.h"

int somar(Operações *operações, int a, int b){
    printf("Resultado da soma: %d\n", a+b);
};

int subtrair(Operações *operações,int a, int b){
    printf("Resultado da subtração: %d\n", a-b);
};

int multiplicar(Operações *operações,int a, int b){
    printf("Resultado da multiplicação: %d\n", a*b);
};

int dividir(Operações *operações,int a, int b){
    if(b!=0){
    printf("Resultado da divisão: %d\n", a/b);
    } else{
        printf("Incapaz de dividir por zero");
    };
};