#include<stdio.h>
#include<time.h>
int kolay(){     
    int indis;
         indis=time(NULL);
         indis=indis%10;
   int sayac;
   sayac=0;
   int hak=4;
   char tahmin[4];
   char kelime[4];
   char kelimeler[10][4]={"VAN\0","CAN\0","RIO\0","BOR\0","MUT\0","ATA\0","NIL\0","ELA\0","ALI\0","ABD\0"};
   int i=0;
   while (i<4)
   {
   kelime[i]=kelimeler[indis][i];
   i++;
   }
   do
   {
if(hak==1){
printf("ipucu:\n");
switch(indis){
case 0:
printf("Turkiyenin Bir Sehri");
break;
case 1:
printf("Bir Erkek Ismi");
break;
case 2:
printf("Yabanci Bir Sehir");
break;
case 3:
printf("Nigdenin Bir Ilcesi");
break;
case 4:
printf("Mersinin Bir Ilcesi");
break;
case 5:
printf("Bir Erkek Ismi");
break;
case 6:
printf("Bir Nehir Ismi");
break;
case 7:
printf("Bir Kiz Ismi");
break;
case 8:
printf("Bir Erkek Ismi");
break;
case 9:
printf("Bir Ulke");
break;
}
printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

     
  scanf("%s",tahmin);
    for(int i=0;i<4;i++){
        if (tahmin[i]>96)
        {
        tahmin[i]-=32;    
        }}
   printf("^^^\n");
        for(int i=0;i<3;i++){
         if(tahmin[i]==kelime[i]){
                  printf("2");
                  sayac++;
                  if (sayac==3)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  
                  continue;}
         if(tahmin[i] == kelime[0]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[1]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[2]){
                  printf("1");
                  continue;}
         if(tahmin[i]!= kelime[i]){
                  printf("0");
                  continue;}
        }
        if((hak-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(hak-1));}
        if((hak-1)==0){
         printf("\nCevap: %s",kelime);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
        printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        hak--;
        sayac=0;}
               
             while (0<hak);
}
int orta(){
   int indis;
         indis=time(NULL);
         indis=indis%10;
   int sayac;
   sayac=0;   
   int hak=4;
   char tahmin[5];
   char kelime[5];
   char kelimeler[10][5]={"BOLU\0","ORDU\0","UTAH\0","RIZE\0","OSLO\0","ROMA\0","KIEV\0","IRAN\0","PERU\0","GANA\0"};
   int i=0;
   while (i<5)
   {
   kelime[i]=kelimeler[indis][i];
   i++;
   }
   do
   { 
if(hak==1){
printf("ipucu:\n");
switch(indis)
{
case 0:
printf("Turkiyenin Bir Sehri");
break;
case 1:
printf("Turkiyenin Bir Sehri");
break;
case 2:
printf("Amerikanin Bir Eyaleti");
break;
case 3:
printf("Turkiyenin Bir Sehri");
break;
case 4:
printf("Avrupada Bir Baskent");
break;
case 5:
printf("Avrupada Bir Baskent");
break;
case 6:
printf("Avrupada Bir Baskent");
break;
case 7:
printf("Bir Ulke");
break;
case 8:
printf("Bir Ulke");
break;
case 9:
printf("Bir Ulke ");
break;
}
printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
scanf("%s",tahmin);
   for (int i = 0; i < 5; i++){
   if (tahmin[i]>96)
   {
      tahmin[i]-=32;
   }}
   printf("^^^^\n");
   
   
        for(int i=0;i<4;i++){
         if(tahmin[i]==kelime[i]){
                  printf("2");
                  sayac++;
                  if (sayac==4)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  continue;}
         if(tahmin[i] == kelime[0]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[1]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[2]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[3]){
                  printf("1");
                  continue;}
         if(tahmin[i]!= kelime[i]){
                  printf("0");
                  continue;}
        }
        if((hak-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(hak-1));}
        if((hak-1)==0){
         printf("\nCevap: %s",kelime);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
        printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    hak--;
        sayac=0;}
         
               
             while (0<hak);
}
int zor(){
   int indis;
         indis=time(NULL);
         indis=indis%10;
   int sayac;
   sayac=0;
   int hak=4;
   char tahmin[6];
   char kelime[6];
   char kelimeler[10][6]={"KONYA\0","TOKAT\0","IZMIR\0","ADANA\0","RUSYA\0","LIBYA\0","DUBAI\0","SINOP\0","SIVAS\0","KILIS\0"};
   int i=0;
   while (i<6)
   {
   kelime[i]=kelimeler[indis][i];
   i++;
   }
   do
   {if(hak==1){
printf("ipucu:\n");
switch(indis){
case 0:
printf("Turkiyenin Bir Sehri");
break;
case 1:
printf("Turkiyenin Bir Sehri");
break;
case 2:
printf("Turkiyenin Bir Sehri");
break;
case 3:
printf("Turkiyenin Bir Sehri");
break;
case 4:
printf("Bir Ulke");
break;
case 5:
printf("Bir Ulke");
break;
case 6:
printf("Asyada Bir Sehir");
break;
case 7:
printf("Turkiyenin Bir Sehri");
break;
case 8:
printf("Turkiyenin Bir Sehri");
break;
case 9:
printf("Turkiyenin Bir Sehri");
break;
}
printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
   scanf("%s",tahmin);
   for (int i = 0; i < 6; i++){
   if (tahmin[i]>96)
   {
      tahmin[i]-=32;
   }}
   printf("^^^^^\n");
        for(int i=0;i<5;i++){
         if(tahmin[i]==kelime[i]){
                  printf("2");
                  sayac++;
                  if (sayac==5)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  
                  continue;}
         if(tahmin[i] == kelime[0]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[1]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[2]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[3]){
                  printf("1");
                  continue;}
         if(tahmin[i] == kelime[4]){
                  printf("1");
                  continue;}                   
         if(tahmin[i]!= kelime[i]){
                  printf("0");
                  continue;}
        
        }
        if((hak-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(hak-1));}



        if((hak-1)==0){
         printf("\nCevap: %s",kelime);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
       printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        hak--;
        sayac=0;}
         
               
             while (0<hak);
}
 int main(){
char harf;
printf("*********************\n");
printf("******KELIME OYUNUNA HOSGELDINIZ*****\n");
printf("*********************\n");
printf("Nasil Oynanir:\n");
printf("Oyuna baslamadan once sorulan 3 farkli zorluk seviyesinden birini seciniz.\n"); 
printf("(K)olay seviyesi 3 harfli kelimelerden\n"); 
printf("(O)rta seviyesi 4 harfli kelimelerden\n");
printf("(Z)or seviyesi 5 harfli kelimelerden olusmaktatir.\n");
printf("Daha sonra tahmininizi girin.\n");
printf("Eger tahmininizdeki harf kelimedeki bir harfle ve tahmininizdeki harfin yeri kelimedeki harfin yeriyle uyusuyorsa dogru tahmin ettiginiz harfin altinda '2' sayisi yazacaktir\n.");
printf("Eger tahmininizdeki harfle kelimedeki bir harf uyusuyor ama yerleri uyusmuyorsa bu sefer harfin altinda '1' sayisi yazacaktir.\n");
printf("Ama eger tahmininizdeki hicbir harf kelimedeki harflerle uyusmuyorsa harflerin altinda '0' yazacaktir.\n");
printf("Toplam 4 tahmin hakkiniz bulunmaktatir.\n");
printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("------------------\n");
do{
printf("|  Oyuna Gir(S)  |\n");
printf("|  Cikis Yap(Q)  |\n");
printf("------------------\n");
scanf("%c",&harf);
if (harf == 'S' || harf =='s')
{printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("Oyun Basliyor\n"); printf("(K)olay\n"); 
 printf("(O)rta\n");printf("(Z)or\n");
 printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 char seviye;
 scanf("%s",&seviye);
 if (seviye == 'K'|| seviye =='k')
 {
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  printf("3 Harfli Tahmininizi Yapiniz\n");
  kolay();  
  }
else if (seviye == 'O'|| seviye == 'o')
 {
  printf("4 Harfli Tahmininizi Yapiniz\n");
  orta();
 }
else if (seviye == 'Z' || seviye == 'z')
 {
  printf("5 Harfli Tahmininizi Yapiniz\n");
  zor();
 }
 else{
    printf("Gecersiz Harf Girdiniz\n");
 }

}
else if (harf == 'Q'|| harf=='q')
{
printf("Cikis Yapiliyor");
return 0;
}
}
while(harf != 'Q' || harf != 'q');


return 0;
}