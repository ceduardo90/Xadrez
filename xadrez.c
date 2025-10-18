//Simulação de movimento de peças de xadrez
#include <stdio.h>

    //Mover a torre 5 casas para a direita
    void moverTorre(int casas) { //Função recursiva

        if (casas > 0)
        {
            printf("Direita!\n"); //Imprime "Direita" 5 vezes
            moverTorre(casas - 1); //Chama a si mesmo com casas - 1
        }

    }

    //Mover o bispo 5 casas na diagonal
    void moverBispo(int casas2) { //Função recursiva

        if (casas2 > 0)
        {
            printf("Cima, Direita!\n"); //Imprime "Cima, Direita" 5 vezes 
            moverBispo(casas2 - 1); //Chama a si mesmo com casas2 - 1
        }

    }

    //Mover a rainha 8 casas para a esquerda
    void moverRainha(int casas3) { //Função recursiva

        if (casas3 > 0)
        {
            printf("Esquerda!\n"); //Imprime "Esquerda" 8 vezes
            moverRainha(casas3 - 1); //Chama a si mesmo com casas3 - 1
        }

    }
    
    int main() {

    printf("Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Rainha:\n");
    moverRainha(8);
    printf("\n");

    //Mover o cavalo duas casas para cima e uma para a direita
    printf("Cavalo:\n");
    
    int movimentoCompleto = 1; //Controle do movimento em "L"

      while (movimentoCompleto--)
      {
        for (int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Cima!\n"); //Imprime "Cima" duas vezes
        }
        printf("Direita\n"); //Imprime "Direita" uma vez
      }
    
    return 0;

    }
    