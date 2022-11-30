#include<stdio.h>
    void hatayibas(int hata){
        printf("Hatali Sayi %d",hata);
    }
    int main(){
    int i;
printf("Lutfen Pozitif Bir Sayi Giriniz:");
scanf("%d",&i);
if(i>0){
printf("%d",i);}
if(i<0){
    hatayibas(404);}

return 0;
}