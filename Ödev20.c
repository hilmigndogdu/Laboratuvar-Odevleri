#include<stdio.h>
int arasini_topla(int s1,int s2){
    int toplam;
    toplam=0;
    if(s1<s2){
        for(s1=s1+1;s1<s2;s1++){
            toplam+=s1;

        }
    }
    if(s2<s1){
        for(s2=s2+1;s1<s2;s1++){
            toplam+=s1;

        }
    }
    printf("%d",toplam);
}


int main(){
    int a,b;
    printf("1.Sayiyi Giriniz:   ");
    scanf("%d",&a);
    printf("2.Sayiyi Giriniz:   ");
    scanf("%d",&b);
    arasini_topla(a,b);
return 0;}