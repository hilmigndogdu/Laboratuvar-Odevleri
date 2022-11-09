#include <stdio.h>
int main(){
int a,b,c,d;
       a=0; b=0; c=0; d=0;
     int e,f,g,h;
       e=0; f=0; g=0; h=0;
 int arac;
 int benzin;
 do{
 printf("Ne Kadar Benzin Alindigini Giriniz: ");
 scanf("%d",&benzin);
 printf("Aracinizi Giriniz:");
 scanf("%d",&arac);
switch(arac){
  
    case 1:
    a++;
    e=(e+benzin);break;
    case 2:
    b++;
    f=(f+benzin);break;
    case 3:
    c++;
    g=(g+benzin);break;
    case 4:
    d++;
    h=(h+benzin);break;
}
} while (arac!=111);

printf("\n\n\n");
if(a>b){
  if(a>c){
    if(a>d){
      printf("En Cok Gelen Araba(%d): Renault\n",a);
    }
  }
}
if(b>a){
  if(b>c){
    if(b>d){
      printf("En Cok Gelen Araba(%d): Mazda\n",b);
    }
  }
}
if(c>a){
  if(c>b){
    if(c>d){
      printf("En Cok Gelen Araba(%d): Honda\n",c);
    }
  }
}
if(d>a){
  if(d>b){
    if(d>c){
      printf("En Cok Gelen Araba(%d): Ford\n",d);
    }
  }
}
if(e>f){
  if(e>g){
    if(e>h){
      printf("En Cok Satis Yapilan Marka( %d lt): Renault \n",e);
    }
  }
}if(f>e){
  if(f>g){
    if(f>h){
      printf("En Cok Satis Yapilan Marka( %d lt): Mazda \n",f);
    }
  }
}
if(g>e){
  if(g>f){
    if(g>h){
      printf("En Cok Satis Yapilan Marka( %d lt): Honda \n",g);
    }
  }
}
if(h>e){
  if(h>g){
    if(h>f){
      printf("En Cok Satis Yapilan Marka( %d lt): Ford \n",h);
    }
  }
}
return 0; 
}

