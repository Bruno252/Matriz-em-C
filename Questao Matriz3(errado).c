#include <stdio.h>
#include <stdlib.h>

int main()
{

    char banda[3][250];
    char nome[5][250];
    int i,j;

    for (i = 0; i < 3; i++){
        printf("Nome da Banda:");
        //scanf("%s",&banda[i]);
        fgets(banda[i], 250, stdin);

        for (j = 0; j < 5; j++){
            printf("Nome do %d Integrantes:", i + 1);
            fgets(nome[j],250,stdin);
            //scanf("%s",&nome[j]);

        }
        
        fflush(stdin);
        printf("\n");
    }

    for (i = 0; i < 3; i++){
        printf("Banda:%s", banda[i]);

        for (j = 0; j < 5; j++){
            printf("Integrantes:%s", nome[i][j]);

        }
        printf("\n");
    }
    return 0;
}