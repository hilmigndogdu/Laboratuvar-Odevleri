#include<stdio.h>


int uzunluk(char isim[]){

    int uzunluk=0;

    int i;

    for(i=0; isim[i] != '\0' ; i++)

    {

        uzunluk++;

    }

    return uzunluk;

}

int main(){

    char ad[]="Mustafa";

    printf("%d",uzunluk(ad));

    return 0;
}