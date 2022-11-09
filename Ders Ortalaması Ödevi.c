#include<stdio.h>
int main()
{
    int ales,yds,mezuniyet;
    printf("Ales Puaninizi Giriniz: ");
    scanf("%d",&ales);
    printf("YDS Puaninizi Giriniz: ");
    scanf("%d",&yds);
    if(yds<70)
    { printf("Kaldiniz");}
    else
    {printf("Mezuniyet Ortalamanizi Giriniz: ");}
    scanf("%d",&mezuniyet);
    int a;
    a=(ales/2)+(yds/4)+(mezuniyet/4);
    if(a>=60)
    {printf("Gectiniz");}
    else{
    printf("Kaldiniz");}
    return 0;
}