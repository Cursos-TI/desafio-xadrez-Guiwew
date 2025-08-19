#include <stdio.h>

void bispo(int casas){//inicio recursiva bispo
    if (casas > 0){//inicio if
        for (int vertical = 1; vertical <= 1; vertical++){//inicio for-while externo
            for (int horizontal = 1; horizontal <= 1; horizontal++){//inicio for-while interno
                printf("direita, ");
            }//fim for-while interno
            printf("cima\n");
        }//fim for-while externo 
    bispo(casas - 1);
    }// fim if
}// fim recursiva bispo

void torre(int casas){//inicio recursiva torre
   if (casas>0){//inicio if
    printf("direita\n");
    torre(casas - 1);
   }//fim if
}//fim recursiva torre

void rainha(int casas){//inicio recursiva rainha
    if (casas>0){//inicio if
        printf("direita\n");
        rainha(casas - 1);
    }//fim if
}// fim recursiva rainha

int main() {
    int movimentobispo =5,movimentotorre=5, movimentorainha=8;//adicionar as peças e declarando os movimentos

    printf("***movimento do bispo***\n");//inicio do movimento do bispo 5 casas vertical 
    bispo(movimentobispo);

    printf("***movimento da torre***\n");//inicio do movimento da torre 5 casas a direita
    torre(movimentotorre);

    printf("***movimento da rainha***\n");//inicio do movimento da rainha 8 casas a esquerda
    rainha(movimentorainha);
    
   printf("***movimento do cavalo***\n");//inicio do movimento do cavalo 2 casas cima e 1 direita
    for (int cavalocima=3, cavalodireita=2; cavalocima>0 || cavalodireita>0; cavalocima--,cavalodireita--)
    {//inicio do for
       if (cavalocima>1){//icinio do if verdadeiro
        printf("cima, ");
       } else{//inicio do else
        printf("direita\n");
    }//fim do else
    }//fim do for

    return 0;
}
