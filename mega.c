#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

void L(){
    printf("\n\n");
}


int main(){

    srand(time(NULL));

    printf("insira a quantidade de jogos que voce deseja fazer: ");
    int jogos;
    scanf(" %i", &jogos);

    L();

    printf("insira a quantidade de numeros por jogo que voce deseja: ");
    int numeros;
    scanf(" %i", &numeros);

    system("cls");

    int *V_num = (int*)malloc(numeros * sizeof(int));

    int i;
    for (i=0;i<jogos;i++){

        int j, k;

        for (j=0;j<numeros;j++){
            V_num[j] = -1;
        }

        for (j=0;j<numeros;j++){

            V_num[j] = 1 + rand() % 60;

            for (k=0; k<j; k++){

                if (V_num[j] == V_num[k]){

                    V_num[j] = 1 + rand() % 60;

                    k = -1;
                }
            }
        }

        printf("os numeros do jogo numero %i sao:", i+1);

        for (j=0;j<numeros;j++){
            printf(" %i", V_num[j]);
        }

        printf(" !");

        printf("\n\n\n\n");

        if (((i+1)%10) == 0){
            if (i+1!=jogos){
                printf("pressione Enter para mostrar mais jogos.");
                getch();
                system("cls");
            }
        }

    }

    printf("Boa sorte nos jogos!!");

    getch();

    system("cls");

    printf("Obrigado por utilizar nosso programa!\nAte a proxima!\n");
    L();
    L();
    printf("\n:3  :3  :3  :3  :3  :3\n\n");
    L();
    L();
    printf("By: MontebellerZ");
    L();
    L();
    L();

    return 0;
}
