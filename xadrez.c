#include <stdio.h>

int main (){
    int bispo_number = 0;
    int rainha_number = 0;

    // mover a Torre cinco vezes para a direita
    for (int i = 0; i < 5; i++) {
        printf ("Direita \n");
    }

    // mover o Bispo 5 vezes para Cima e Direita
    do {
        printf("Cima, Direita \n");
        
        bispo_number++;
    } while (bispo_number < 5);


    // Mover a Rainha 8 vezes para a Esqueda
    while (rainha_number < 8) {
        printf ("Esquerda \n");
        rainha_number++;
    }
    
    
    return 0;
}