#include<stdio.h>
int cizim(int d){
    int a,b,c;
    for(a=1;a<=d;a++){
        for(b=d-1;b>=a;b--){
            printf(" ");
           } for(c=1;c<=a;c++){
                printf("*");
            }
        
        printf("\n");
    }
}
int main(){
    int d;
    printf("Giriniz: ");
    scanf("%d",&d);
cizim(d);
return 0;}