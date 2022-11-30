#include<stdio.h>

void buyuk_kucuk(int a, int b){

    if(a>b){

        printf("Birinci Sayi Ikinci Sayidan Buyuktur");

    }

   else if(b>a){

        printf("Ikinci Sayi Birinci Sayidan Buyuktur");

    }

    else{
        printf("Iki Sayi Esittir");
    }
}

int main(){

    int s1,s2;

    printf("1.Sayiyi giriniz:    ");

    scanf("%d",&s1);

    printf("2.Sayiyi giriniz:    ");

    scanf("%d",&s2);

    buyuk_kucuk(s1,s2);

    return 0;
}