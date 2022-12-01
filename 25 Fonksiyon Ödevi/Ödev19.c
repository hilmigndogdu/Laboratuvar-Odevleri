#include<stdio.h>

int asal_mi(int sayi){

    int i;

    for(i=2;i<sayi;i++){

        if(sayi%i == 0){

        return 0;}

    }

    return 1;}

    int main(){

        int x;

        printf("Sorgulamak Istediginiz Sayiyi Giriniz:  ");

        scanf("%d",&x);

        if(asal_mi(x)==0){

            printf("Bu Sayi Asal Degildir.");

        }

        else{

            printf("Bu Sayi Asaldir");

        }    

    return 0;

    }
