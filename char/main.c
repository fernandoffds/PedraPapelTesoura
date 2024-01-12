#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];

    int ano_nascimento;
    int idade;

    printf("Qual seu nome completo ?\n");
    scanf("%s",nome );



    printf("ok, e agora em que ano voce nasceu ?\n");
    scanf("%d", &ano_nascimento);

    printf("valeu, agora %s  qual e a sua idade  ?\n",nome);
    scanf("%d", &idade);
    printf("Nome:  %s\nAno de nascimento: %d\nIdade: %d\n",nome,ano_nascimento,idade);

    printf("Aguarde enquanto lemos seus dados...");
    printf("A primeira letra do seu nome e: %c",nome[0]);


    if (ano_nascimento >= 2000) {
        printf("\n voce do seculo 21");
    }

    else if (ano_nascimento >= 1990) {
        printf("\n voce da decada de 90");
    }
    else if (ano_nascimento >= 1980) {
        printf("\n voce e da decada de 80");
    }

    return 0;
}
