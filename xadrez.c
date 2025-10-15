#include <stdio.h>

//Simulação de movimento de peças de xadrez
int main(){

    int bispo = 0, rainha = 0;

    //Mover a torre 5 casas para a direita - For
    printf("Torre:\n");

    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita!\n"); //Imprime a direção do movimento
    }

    //Mover o bispo 5 casas na diagonal - While
    printf("Bispo:\n");

    while (bispo < 5)
    {
        printf("Cima, direita!\n"); //Imprime a direção do movimento

        bispo++;

    }
    
    //Mover a rainha 8 casas para a esquerda - Do while
    printf("Rainha:\n");

    do
    {
        printf("Esquerda!\n"); //Imprime direção do movimento
        rainha++;

    } while (rainha <8);
   
return 0;

}