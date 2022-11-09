#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Eskenar ucgen degerini giriniz:  ");
    scanf("%d",&d);
    for(a=1;a<=d;a++){
        for(b=d-1;b>=a;b--){
            printf(" ");
        }for(c=1;c<=(2*a-1);c++){
            printf("*");
        }
    printf("\n");}return 0;
}