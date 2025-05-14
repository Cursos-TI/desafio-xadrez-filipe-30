#include <stdio.h>

void torre(int numero){     //recursividade para torre
    if (numero > 0)
    {
        printf("Direita \n", numero);
        torre(numero - 1);
    }
    
}
void rainha(int numero){   //recursividade para rainha
    if (numero > 0)
    {
        printf("Esquerda \n", numero);
        rainha(numero - 1);
    }
    
}
           // Menu para escolha das peças

int main() {
    int opcao;
    
    printf("Escolha uma opção:\n");
    printf("1 - Movimente a Bispo\n");
    printf("2 - Movimente o Torre\n");
    printf("3 - Movimente a Rainha\n");
    printf("4 - Movimente o Cavalo:\n");
    scanf("%d", &opcao);

    switch (opcao){

//Movimento pata Bispo
case 1: {     

          for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 1; j++) {
            printf("Direita,");}
            printf("Cima \n");
        }
    }
       break;
// Movimento para Torre 
 case 2: {

    int quantidade = 5;

    torre(quantidade);
}
    break;

// Movimento para Rainha
 case 3: {

    int quantidade = 8;

    rainha(quantidade);
}
    break;

// Movimento para Cavalo

 case 4: { 

        for(int i = 1; i <= 1; i++) {
        for(int j = 1; j <= 2; j++) {
            printf("Cima \n");}
            printf("Direita \n");
        }
        break;
}
}
}