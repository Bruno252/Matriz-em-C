#include <stdio.h>
#include <stdlib.h>

int main(){

char banda[2][250];
char integrantes[2][3][250];
int i,j;

    for(i=0;i<3;i++){
        printf("Banda:");
        fgets(banda[i],sizeof(banda[i]),stdin);
        for(j=0;j<5;j++){

            printf("Integrante:");
            fgets(integrantes[i][j],sizeof(integrantes[i][j]),stdin);
            
        }
        printf("\n");
    }

    printf("\n");
    system("cls || clear");

    for(i=0;i<3;i++){

        printf("Banda:%s",banda[i]);

        for(j=0;j<5;j++){

            printf("Integrantes:%s",integrantes[i][j]);

        }
        printf("\n");
    }


    return 0;
}
