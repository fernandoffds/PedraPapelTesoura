#include <stdio.h>
#include <stdlib.h>

int main() {

    char player[256];
    char player2[256];

    printf("sua vez player 1");
    scanf("%s", player);

    printf("\n sua vez player 2");
    scanf("%s", player2);

    printf("\no player 1 jogou %s e o player 2 jogou %s", player,player2);
    printf("\naguarde estamos analisando as informacaoes\n");

    if(strcmp(player, "papel") == 0 ) {
        if(strcmp(player2, "papel") == 0 ) {
        printf("Empate!");
    }

    else if(strcmp(player2, "tesoura")== 0) {
       printf("player 2 venceu poque tesoura corta papel");
    }

    else if (strcmp(player2, "pedra") == 0) {
            printf("player 1 venceu porque papel embrulha da pedra");
    }
    else{
        printf("player 2 jogou uma informacao invalida");
    }

     } else if (strcmp(player, "tesoura") == 0) {
         if(strcmp(player2, "papel") == 0 ) {
        printf("player 1 venceu porque tesoura corta papel");
    }

    else if(strcmp(player2, "tesoura")== 0) {
       printf("Empate!");
    }

    else if (strcmp(player2, "pedra") == 0) {
            printf("player 2 venceu porque pedra quebra tesoura");
    }
    else{
        printf("player 2 jogou uma informacao invalida");
    }

     } else if (strcmp(player, "pedra")== 0) {
         if(strcmp(player2, "papel") == 0 ) {
        printf("player 2 venceu porque papel embrulhar pedra");
    }

    else if(strcmp(player2, "tesoura")== 0) {
       printf("player 1 venceu porque pedra quebra tesoura");
    }

    else if (strcmp(player2, "pedra") == 0) {
            printf("Empate!");
    }
    else{
        printf("player 2 jogou uma informacao invalida");
    }
    } else{
        printf("player 1 jogou uma informacao invalida");
    }






    return 0;

    }

