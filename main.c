#include <stdio.h>
#include <stdlib.h>
#include "Operações.h"

int main(){

    Operações matematica;
    
    somar(&matematica, 55, 26);
    subtrair(&matematica, 1000, 7);
    multiplicar(&matematica, 11, 53);
    dividir(&matematica, 36 , 9 );

    dividir(&matematica, 32, 0);

}