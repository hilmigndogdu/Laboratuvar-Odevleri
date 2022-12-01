#include<stdio.h>

int uzunluk(char isim[]){

  int uzunluk=0;

  int i;

  for(i=0;isim[i] != '\0'; i++){

    uzunluk++;

  }

  return uzunluk;

}

int main(){

    char ad[12];

    printf("Bir Isim Giriniz:   ");

    scanf("%s",ad);

    printf("%s ismi %d harflidir",ad,uzunluk(ad));


    return 0;
}