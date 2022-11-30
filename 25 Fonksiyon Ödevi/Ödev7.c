#include<stdio.h>

int kup(int s1){


    int sonuc;

    sonuc=s1*s1*s1;

    return sonuc;

}

int main(){

    int x;

   printf("Bir sayi giriniz:    ");

   scanf("%d",&x);

   kup(x);

   printf("%d",kup(x));

   return 0;
}