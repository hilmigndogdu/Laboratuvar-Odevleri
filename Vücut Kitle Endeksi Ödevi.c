#include<stdio.h>
int main()
{
float boy,kilo;
printf("Boyunuzu Giriniz: ");
scanf("%f",&boy);
printf("Kilonuzu Giriniz: ");
scanf("%f",&kilo);
float vke;
vke=kilo/(boy*boy);

printf("Vucut Kitle Endeksiniz :%f  \n",vke);

if(vke<19)
{printf("Dusuk Kilolulusunuz");}

if(25>vke && vke>=19)
{printf("Normal Kilolusunuz");}

if(30>vke && vke>=25)
{printf("Fazla Kilolusunuz");}

if(vke>30)
{printf("Obezsiniz");}

return 0;}
