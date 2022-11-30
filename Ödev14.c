#include<stdio.h>
int toplam(int matris[][5],int size){

    int i,j;

    int a;

    for(j=0;j<5;j++){

        for(i=0;i<=2;i++){

            a+=matris[i][j];

        }

        printf("%d ",a);

      a=0;

    }

    return a;



   }

int main(){

    int matris[3][5];

    int i,j;

    for(i=0;i<3;i++){

        for (j=0;j<5;j++)

        {
            printf("Matrisin %d %d. Degerini Giriniz:   ",i,j);
            scanf("%d",&matris[i][j]);

        }



    }

      for(i=0;i<3;i++){
        for (j=0;j<5;j++)

        {

            printf("%d  ",matris[i][j]);

        }


        printf("\n");
    }



    printf("+----------------------\n");

    toplam(matris,3);

    return 0;}

