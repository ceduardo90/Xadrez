//Simulação de movimento de peças de xadrez
#include <stdio.h>

    //Mover o cavalo duas casas para cima e uma para a direita
    int main(){

    printf("Cavalo: \n");
    
    int movimentocompleto = 1; //Controle do movimento em "L"

    while (movimentocompleto--)
    {
      for (int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Cima!\n"); //Imprime "Cima" duas vezes
        }
        printf("Direita!\n"); //Imprime "Direita" uma vez

    }
    
    return 0;

    }

    //Mover a torre 5 casas para a direita
    void moverTorre(int casas) {

    printf("Torre:\n");

        if (casas > 0)
        {
            printf("Direita!\n");
            moverTorre(casas - 1);
        }
    }

    int main() {
        moverTorre(5);
        return 0;

    printf("\n");

    }

    //Mover o bispo 5 casas na diagonal
    void moverBispo(int casas) {

    printf("Bispo:\n");

        if (casas > 0)
        {
            printf("Cima, Direita!\n");
            moverBispo(casas - 1);
        }
    }

    int main() {
        moverBispo(5);
        return 0;

    printf("\n");

    }
    
    //Mover a rainha 8 casas para a esquerda
    void moverRainha(int casas) {

    printf("Rainha:\n");

        if (casas > 0)
        {
            printf("Esquerda!\n");
            moverTorre(casas - 1);
        }
    }

    int main() {
        moverRainha(8);
        return 0;

    printf("\n");

    }