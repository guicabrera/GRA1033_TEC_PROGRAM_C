#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//min 35 aula introdução
int main(void){
    setlocale(LC_ALL,"Portuguese");

    char str[] = "meu Valor em C";

    // function to return the var value in upper case
    printf(strupr(str));
    printf(strlwr(str));

    //comparação de strings
    strcmp("Meu valor em C",str); //compara a string passada com a var str

    //troca o valor de uma variável por outro valor
    strcpy(str,"Batata frita");

    //troca os digitos da var str de acordo com a string 
    //passada e o número de caracteres passado
    strncpy(str,"Troca string",3);



}