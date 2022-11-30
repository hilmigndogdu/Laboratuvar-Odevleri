#include<stdio.h>
int toplam(int s1,int s2){


    return s1+s2;


}


int main(){


    int sayi1,sayi2;


    printf("2 Sayi Giriniz:");


    scanf("%d %d",&sayi1,&sayi2);


    printf("%d",toplam(sayi1,sayi2));


    return 0;
}