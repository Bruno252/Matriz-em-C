#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aluno[4][250];
    float nota[4][3]; 
    int i, j;
    float soma=0;
    float media[4];

    for (i = 0; i < 4; i++)
    {
        //aluno
        printf("Aluno:");
        fgets(aluno[i],250,stdin);
        for (j = 0; j < 3; j++)
        {
            //nota
            printf("%d Nota:",j + 1);
            scanf("%f", &nota[i][j]);
            soma+= nota[i][j];
        }
        media[i]=soma/3;
        soma=0;
        fflush(stdin);
        printf("\n");
    }

system("cls || clear");


    for (i = 0; i < 4; i++)
    {
        printf("Aluno:%s",aluno[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d Nota:%.2f\n",j + 1, nota[i][j]);
        }
        printf("Media:%.2f\n",media[i]);
        printf("\n");
    }

    return 0;
}