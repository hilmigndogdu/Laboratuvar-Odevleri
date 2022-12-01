#include<stdio.h>

int islem(int a){

int bakiye,tutar;

bakiye=1000;

     switch (a)

    {

    case 1:

        printf("Cekilecek Tutari Giriniz:");

        scanf("%d",&tutar);

        if(tutar>bakiye){

            printf("Bakiye Yetersiz");

        }

        else{

        printf("Kalan Bakiye: %d\n",bakiye-tutar);

        bakiye-=tutar;

        printf("Bakiye: %d",bakiye);

        }

        break;

    case 2:

       printf("Yatirilacak Tutari Giriniz");

       scanf("%d",&tutar);

       printf("Toplam Bakiye: %d\n",bakiye+tutar);


       bakiye=bakiye+tutar;

       break;                                                                           

    case 3:

    printf("Havale Ucretini Giriniz");


    scanf("%d",&tutar);

    printf("Kalan Bakiye: %d\n",bakiye-tutar);
    bakiye=bakiye-tutar;

    break;

    case 4:

    printf("Mevcut Bakiyeniz: %d\n",bakiye);


    break;
    case 5:


    printf("Islem Iptal Ediliyor:");


    break;


    default:
    printf("Gecersiz Numara Girdiniz:");


        break;

        printf("\n");


    }}

int main(){
  int a;


  printf("Islemler:\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n\n");


  printf("Islem Seciniz: ");


  scanf("%d",&a);


  islem(a);



  return 0;}