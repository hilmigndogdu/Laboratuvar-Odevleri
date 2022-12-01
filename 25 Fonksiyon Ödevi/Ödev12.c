#include<stdio.h>

void carpim(int dizi[][4],int size){

    int i,j;

    for(i=0;i<size;i++){

        for(j=0;j<4;j++)

        {

        printf("%d ",dizi[i][j]);

        }

        printf("\n");

    }


}

int main(){

    int i,j;

    int dizi[3][4];

    printf("Dizinin Degerlerini Giriniz:    ");

    for(i=0;i<3;i++){

        for(j=0;j<4;j++)

        {

        scanf("%d",&dizi[i][j]);

        }

    }

    carpim(dizi,3);

return 0;}
