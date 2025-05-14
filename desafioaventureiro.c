#include <stdio.h>

int main() {
    int opcao;
    int i = 1;
    int j = 0;

    printf("Escolha uma opção:\n");
    printf("1 - Movimente o Cavalo\n");
    printf("2 - Movimente o Cavalo\n"); // dois movimentos possiveis para cavalo
    scanf("%d", &opcao);

       // usando switch para opcões de movimentos

 switch (opcao){

    case 1: {   // movimento 1

        for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= 2; j++) {
            printf("Cima \n");}
            printf("Direita \n");
        }
        break;
}

    case 2: {  // movimento 2

        int i = 1;
        int j = 0;


        for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= 2; j++) {
            printf("Cima \n");}
            printf("Esquerda \n");
        }
        break;
        }

    }}