#include<stdio.h>
int main(){
    int a,b,c;
    printf("Kac satir olsun?: ");
    scanf("%d",&c);
    for(a=1;a<=c;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    
return 0; }