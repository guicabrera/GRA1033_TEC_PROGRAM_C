#include <stdlib.h>
#include <stdio.h>

//estruturas de decisão if's
//estruturas de repetição

int main(int argc, char *argv[]){
    int idade = 25;
    
    //ESTRUTURA IF --> precisa da concatenação para funcionar semelhante ao python mas isso é somente para casos de execução de uma linha, caso precise ter mais que uma linha
    //será necessário criar um bloco de código com {}
    if(idade >=18)
        printf("Maior de idade");
    else
        printf("Menor de idade");

    //IF's aninhados --> um if dentro de outro if --> famosa baguncinha --> o bloco de código faz-se necessário necesse caso
    if(idade>21) {
        printf("Você já pode beber");
        if(idade>23)
            printf("Você já pode comprar bebidas");
    } else {
        printf("Você não pode beber");
    }



    //estruturas de repetição
    int i = 0;
    for(i=0;i<10;i++) {
        printf("\n %d",i);
    }
}