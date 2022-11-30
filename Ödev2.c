#include<stdio.h>

void terscevir(char isim[]){

    int i,uzunluk,gecici;

    uzunluk=0;

  for(i=0;isim[i] != '\0'; i++){

    uzunluk++;

  }

for(i=0; i<uzunluk/2;i++){

    gecici= isim[i];

    isim[i]= isim[uzunluk-1-i];

    isim[uzunluk-1-i]= gecici;

}
return ;
}

int main(){




    char text[200]="Gazi Universitesi";

    

    terscevir(text);

    printf("Gazi Universitesinin Tersten Yazilisi: %s",text);

    return 0;
}