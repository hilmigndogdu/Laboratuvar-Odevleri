#include<stdio.h>
int faktoriyel(int sayi){

    int fact=1;
    
    for(;sayi>0;sayi--){
        
        fact*=sayi;
    }
    
    return fact;

}

int main(){

    int n;

    printf("Faktoriyelini Istediginiz Sayiyi Giriniz:   ");

    scanf("%d",&n);

    printf("%d",faktoriyel(n));

    return 0;
}

