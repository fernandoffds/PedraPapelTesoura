#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bajulador = 1;
    int semsentido = 10;

    while(bajulador <= semsentido) {
        printf("estamos nop primeiro turno\n\n");
        if(bajulador == 7){
            int contador = 3;
            while(contador > 0){
                printf("estamos no segundo turno\n\n");
                contador--;
            }
        }



        bajulador++;
    }






    return 0;
}
