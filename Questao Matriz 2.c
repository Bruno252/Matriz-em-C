#include <stdio.h>
#include <stdlib.h>

int main()
{

    char materia[3][250];
    int i, j,soma=0;
    float nota[3][2],media[3];

    for (i = 0; i < 3; i++){
        printf("Nome da Materia:");
        fgets(materia[i], 250, stdin);

        for (j = 0; j < 2; j++){
            printf("%d Nota:", j + 1);
            scanf("%f", &nota[i][j]);
            soma+=nota[i][j];

        }
        fflush(stdin);
        media[i]=soma/j;
        soma=0;
        printf("\n");
    }

system("cls || clear");

    for (i = 0; i < 3; i++){
        printf("Nome Da Materia:%s", materia[i]);

        for (j = 0; j < 2; j++){
            printf("%d Nota:%.2f\n",j+1,nota[i][j]);

        }
        printf("Media:%.2f\n",media[i]);
        if(media[i]>=7){
            printf("Aluno Aprovado\n");

        }else if(media[i]>=5 || media[i]==6.9){
            printf("Aluno em Recuperacao\n");

        }else{
            printf("Aluno Reprovado\n");

        }
        printf("\n");
    }

    return 0;
}