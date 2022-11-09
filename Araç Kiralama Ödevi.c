#include<stdio.h>
int main(){
  
int gun,km,fiyat;
  char arac;
    printf("Aracinizi Giriniz");
    arac=getchar();
        printf("Kac gun kiraladiniz?");
        scanf("%d",&gun);
        printf("Kac km kullandiniz?");
        scanf("%d",&km);
    
    switch(arac){
        default:
        printf("Gecersiz Arac Numarasi Girdiniz\n");
        case 'a':
        fiyat=(gun * 20)+(km * 18);
        break;
         case 'A':
        fiyat=(gun * 20)+(km * 18);
        break;
        case 'b':
        fiyat=(gun * 32)+(km * 22);
        break;
        case 'B':
        fiyat=(gun * 32)+(km * 22);
        break;
        case 'c':
        fiyat=(gun * 43)+(km * 28);
        break;
        case 'C':
        fiyat=(gun * 43)+(km * 28);
        break;
        case 'p':
        fiyat=(gun * 51)+(km * 36);
        break;
        case 'P':
        fiyat=(gun * 51)+(km * 36);
        break;
        }
    printf("Hesabiniz: %d",fiyat);

    return 0;
}