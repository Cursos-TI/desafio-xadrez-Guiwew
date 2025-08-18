#include <stdio.h>

int main() {
    int bispo =1,torre=1, rainha=1, cavalo;//adicionar as peças

        printf("***movimento do bispo***\n");
    while (bispo<=5){//inicio do while e movimento do bispo a 5 casas diagonal direita
        printf("cima direita\n");
        bispo++;  }//fim do while

        printf("***movimento da torre***\n");
    do{//inicio do do-while e movimento da torre 5 casas a direita
        printf("direita\n");
        torre++;
    } while (torre<=5);//fim do do-while

    printf("***movimento da rainha***\n");
    for (rainha = 1; rainha<=8; rainha++){//inicio do for-while e movimento da rainha 8 casas a esquerda
        printf("esquerda\n");  }//fim do for-while
    
    printf("***movimento do cavalo***\n");
    for (cavalo=1; cavalo<=1; cavalo++){//inicio do for-while e movimento do cavalo 2 casas baixo e 1 esquerda
        int cavalodiagonal=1;

        while (cavalodiagonal<=2){//começo do while interno
            printf("baixo, ");
            cavalodiagonal++;
        }//fim do while interno

        printf("esquerda\n");
        
    }//fim do for-while
    


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
