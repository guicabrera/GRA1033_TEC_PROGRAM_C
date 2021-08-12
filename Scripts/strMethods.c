#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//min 35 aula introdução
int main(void){
    setlocale(LC_ALL,"Portuguese");

    char str = "meu Valor em C";

    // function to return the var value in upper case
    printf(strupr(str));
    printf(strlwr(str));

    
}