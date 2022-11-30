#include <stdio.h>

int deger_yaz_topla(int id1, int id2);

int main(void)
{
  int id1=7, id2=21;

  printf("%d ve %d arasindaki sayilarin toplami: %d\n", id1, id2, deger_yaz_topla(id1, id2));

  id1=35, id2=50;
  
  printf("%d ve %d arasindaki sayilarin toplami: %d\n", id1, id2, deger_yaz_topla(id1, id2));

  return 0;
}

int deger_yaz_topla(int id1, int id2)
{
  int id3=0;

  
  for ( ; id1<=id2; id1++) {
  
       id3 += id1;
  
  }

  printf("\n");

  return id3;
}
