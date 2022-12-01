#include<stdio.h>

void dortgen(int kisa,int uzun){

int i,j;

for(i=0;i<uzun;i++){

    for(j=0;j<kisa;j++){

        printf("*");

    }

printf("\n");
}

}

int main(){

    int a,b;

    printf("Dortgenin enini giriniz:    ");

    scanf("%d",&a);

    printf("Dortgenin boyunu giriniz:    ");

    scanf("%d",&b);

    dortgen(a,b);


    return 0;
}