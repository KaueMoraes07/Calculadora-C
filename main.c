#include <stdio.h>

int main(){

    int a, b;
    int operação;

    printf("Escolha o primeiro número: ");
    scanf ("%d",&a);

    printf("Escolha o segundo número: ");
    scanf("%d",&b);
    
    printf("Que operação deseja realizar? Soma(1)|Subtração(2)|Multiplicação(3)|Divisão(4)\nDigite aqui:");
    scanf("%d",&operação);

    switch(operação){
        case 1:
        printf("O resultado da soma é: %d", a+b);
        break;
        case 2:
        printf("O resultado da subtração é: %d", a-b);
        break;
        case 3:
        printf("O resultado da multiplicação é: %d", a*b);
        break;
        case 4:
        if(b!=0){
        printf("O resultado da divisão é: %d", a/b);
        }else{
            printf("Divisão por zero não permitida!");
        };
        break; 
    }

    return 0;
}