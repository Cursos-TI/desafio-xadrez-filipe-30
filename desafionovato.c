#include <stdio.h>

int main() {
    int opcao;
    
    printf("Escolha uma opção:\n");
    printf("1 - Movimente a Torre\n");
    printf("2 - Movimente o Bispo\n");
    printf("3 - Movimente a Rainha\n");
    scanf("%d", &opcao);
    
    // usando switch para opcões de movimentos

    switch (opcao){

    case 1: {

         // usando ( FOR)
        // Mova Torre

       
        for(int i = 1; i <= 5; i++) {
            printf("direita \n");
        }
        break;
    }
    
    case 2: {

     // Usando ( WHILE)
    // Mova o Bispo

    int numero;
    int i = 1;

  
    while ( i <= 5) {
        printf("Cima, direita\n");
        i++;
    }
    break;
}
    case 3: {

        // Usando do while
        // Mova a rainha

                int i = 1;
          

        do {
            printf("Esquerda\n",i);
            i++;
        } while (i <= 7);
        printf("Esquerda\n",i);
        

        }
        
        return 0;

    }
  }







