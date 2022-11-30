#include<stdio.h>

int carpim(int s1,int s2){

    int s3;

    s3=(s1*s2);

    return s3;

}

int main(){

    int t;

    t=carpim(2,4);

    printf("%d\n",t);

    t=carpim(9,11);

    printf("%d",t);

    return 0;

}