#include<stdio.h>

int yazici(int dizi[][4],int size){

    int a,b;

     for(a=0;a<2;a++){

        for(b=0;b<4;b++){

            printf("%d ",dizi[a][b]);
       }

     printf("\n");

    }
    

}



int main(){

    int matris[2][4];

    int i,j;

    for(i=0;i<2;i++){

        for(j=0;j<4;j++){

            printf("Dizinin %d %d. degerini giriniz:    ",i,j);

            scanf("%d",&matris[i][j]);
       }
    
    }
    yazici(matris,2);

    return 0;


}