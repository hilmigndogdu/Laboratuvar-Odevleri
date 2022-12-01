
#include<stdio.h>

int harf(int dersort){

    if(dersort>=90){

        printf("AA ile gectiniz",dersort);

    }

    else if (dersort>=85)

    {

        printf("BA ile gectiniz",dersort);

    }

    else if (dersort>=80)

    {

        printf("BB ile gectiniz",dersort);

    }

    else if (dersort>=75)

    {

        printf("CB ile gectiniz",dersort);

    }

    else if (dersort>=70)

    {  

        printf("CC ile gectiniz",dersort);



    }

    else if (dersort>=65)

    {

        printf("DC ile gectiniz",dersort);



    }else

    {

        printf("FF ile kaldiniz",dersort);

    }

    return dersort;

}







int main(){

    int vize1,vize2,final;

    float ort;

    printf("Birinci Vizenizi Giriniz");

    scanf("%d",&vize1);

    printf("Ikinci Vizeyi Giriniz");

    scanf("%d",&vize2);

    printf("Finali Giriniz");

    scanf("%d",&final);

    ort=((vize1+vize2)*3/10)+(final*3/10);

   harf(ort);

    return 0;}

    