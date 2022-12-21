#include<stdio.h>
#include<time.h>
int kolay(){     
    int indis;
         indis=time(NULL);
         indis=indis%10;
   int ksayac;
   ksayac=0;
   int ka=4;
   char kkelime[10];
   char kisim[10];
   char kkelimeler[10][3]={"VAN","CAN","RIO","BOR","MUT","ADA","NIL","ELA","USA","ABD"};
   int i=0;
   while (i<3)
   {
   kisim[i]=kkelimeler[indis][i];
   i++;
   }
   do
   { scanf("%s",kkelime);
    for(int ki=0;ki<3;ki++){
        if (kkelime[ki]>96)
        {
        kkelime[ki]-=32;    
        }}
   printf("^^^\n");
        for(int ki=0;ki<3;ki++){
         if(kkelime[ki]==kisim[ki]){
                  printf("2");
                  ksayac++;
                  if (ksayac==3)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  
                  continue;}
         if(kkelime[ki] == kisim[0]){
                  printf("1");
                  continue;}
         if(kkelime[ki] == kisim[1]){
                  printf("1");
                  continue;}
         if(kkelime[ki] == kisim[2]){
                  printf("1");
                  continue;}
         if(kkelime[ki]!= kisim[ki]){
                  printf("0");
                  continue;}
        }
        if((ka-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(ka-1));}
        if((ka-1)==0){
         printf("\nCevap: %s ",kisim);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
        printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        ka--;
        ksayac=0;}
               
             while (0<ka);
}
int orta(){
   int indis;
         indis=time(NULL);
         indis=indis%10;
   int osayac;
   osayac=0;
   int oa=4;
   char okelime[10];
   char oisim[10];
   char okelimeler[10][4]={"BOLU","ORDU","KAZA","RIZE","OSLO","ROMA","KIEV","IRAN","PERU","GANA"};
   int i=0;
   while (i<4)
   {
   oisim[i]=okelimeler[indis][i];
   i++;
   }
   do
   { scanf("%s",okelime);
   for (int oi = 0; oi < 4; oi++){
   if (okelime[oi]>96)
   {
      okelime[oi]-=32;
   }}
   printf("^^^^\n");
   
   
        for(int oi=0;oi<4;oi++){
         if(okelime[oi]==oisim[oi]){
                  printf("2");
                  osayac++;
                  if (osayac==4)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  continue;}
         if(okelime[oi] == oisim[0]){
                  printf("1");
                  continue;}
         if(okelime[oi] == oisim[1]){
                  printf("1");
                  continue;}
         if(okelime[oi] == oisim[2]){
                  printf("1");
                  continue;}
         if(okelime[oi] == oisim[3]){
                  printf("1");
                  continue;}
         if(okelime[oi]!= oisim[oi]){
                  printf("0");
                  continue;}
        }
        if((oa-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(oa-1));}
        if((oa-1)==0){
         printf("\nCevap: %s",oisim);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
        printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        oa--;
        osayac=0;}
         
               
             while (0<oa);
}
int zor(){
   int indis;
         indis=time(NULL);
         indis=indis%10;
   int zsayac;
   zsayac=0;
   int za=4;
   char zkelime[10];
   char zisim[10];
   char zkelimeler[10][5]={"KONYA","TOKAT","IZMIR","ADANA","RUSYA","LIBYA","DUBAI","SINOP","SIVAS","KILIS"};
   int i=0;
   while (i<5)
   {
   zisim[i]=zkelimeler[indis][i];
   i++;
   }
   do
   { scanf("%s",zkelime);
   for (int zi = 0; zi < 5; zi++){
   if (zkelime[zi]>96)
   {
      zkelime[zi]-=32;
   }}
   printf("^^^^^\n");
        for(int zi=0;zi<5;zi++){
         if(zkelime[zi]==zisim[zi]){
                  printf("2");
                  zsayac++;
                  if (zsayac==5)
                  {
                     printf("\nTebrikler!Kazandiniz!\n");
                     printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                     return 0;
                  }
                  
                  continue;}
         if(zkelime[zi] == zisim[0]){
                  printf("1");
                  continue;}
         if(zkelime[zi] == zisim[1]){
                  printf("1");
                  continue;}
         if(zkelime[zi] == zisim[2]){
                  printf("1");
                  continue;}
         if(zkelime[zi] == zisim[3]){
                  printf("1");
                  continue;}
         if(zkelime[zi] == zisim[4]){
                  printf("1");
                  continue;}                   
         if(zkelime[zi]!= zisim[zi]){
                  printf("0");
                  continue;}
        
        }
        if((za-1)>0){
        printf("\n%d Hakkiniz Kaldi\n",(za-1));}



        if((za-1)==0){
         printf("\nCevap: %s",zisim);
         printf("\nHic Hakkiniz Kalmadi\nKaybettiniz!");
         printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
         return 0;
        }
       printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        za--;
        zsayac=0;}
         
               
             while (0<za);
}
 int main(){
char harf;
printf("***********************************************************\n");
printf("*****************KELIME OYUNUNA HOSGELDINIZ****************\n");
printf("***********************************************************\n");
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
    printf("Gecersiz Harf Girdiniz");
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
