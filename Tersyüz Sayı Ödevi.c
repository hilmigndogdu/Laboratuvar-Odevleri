#include<stdio.h>
int main()
{
int sayi;
printf("Bir sayi giriniz:");
scanf("%d",&sayi);
int a,b,c,d;
d=sayi%10;
c=(sayi%100-d)/10;
b=(sayi%1000-sayi%100)/100;
a=(sayi%10000-sayi%1000)/1000;

int ab,cd,ba,dc;
ab=a*10+b;
cd=c*10+d;
ba=b*10+a;
dc=d*10+c;

if(
    ab*cd==ba*dc)
{ printf("Yazdiginiz sayi tersyuz sayidir");}
else {
printf("Yazdiginiz sayi tersyuz sayi degildir");}

return 0;



}