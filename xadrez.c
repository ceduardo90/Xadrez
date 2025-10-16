#include <stdio.h>

//Simulação de movimento de peças de xadrez
int main(){

    //Mover a torre 5 casas para a direita - For
    printf("Torre:\n");

    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita!\n"); //Imprime a direção do movimento
    }

    printf("\n");

    //Mover o bispo 5 casas na diagonal - While
    printf("Bispo:\n");

    int bispo = 0;

    while (bispo < 5)
    {
        printf("Cima, direita!\n"); //Imprime a direção do movimento

        bispo++;

    }

    printf("\n");
    
    //Mover a rainha 8 casas para a esquerda - Do while
    printf("Rainha:\n");

    int rainha = 0;

    do
    {
        printf("Esquerda!\n"); //Imprime direção do movimento
        rainha++;

    } while (rainha <8);

    printf("\n");

    //Mover o cavalo duas casas para cima e uma para a direita
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