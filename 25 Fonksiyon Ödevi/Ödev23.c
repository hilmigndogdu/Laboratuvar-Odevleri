#include<stdio.h>
int hesaplama(int b1,int k1){
    float vke;
    b1=(b1*b1);
vke = k1/(b1/10000);

printf("Vucut Kitle Endeksiniz :%f \n",vke);

if(vke<19)
{printf("Dusuk Kilolulusunuz");}

if(25>vke && vke>=19)
{printf("Normal Kilolusunuz");}

if(30>vke && vke>=25)
{printf("Fazla Kilolusunuz");}

if(vke>30)
{printf("Obezsiniz");}

}

int main()
{
int boy,kilo;
printf("Boyunuzu Giriniz: ");
scanf("%d",&boy);
printf("Kilonuzu Giriniz: ");
scanf("%d",&kilo);
hesaplama(boy,kilo);
return 0;}
