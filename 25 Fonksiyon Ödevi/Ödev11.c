#include<stdio.h>
int carpim(int dizi[],int size){
    int i=0;
    int sonuc=1;
    for(;i<size;i++){
        sonuc*=dizi[i];
}
return sonuc;
}
int main(){
    int dizi[5]={1,2,3,4,5};
    printf("%d",carpim(dizi,5));
    return 0;

}