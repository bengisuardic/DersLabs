
#include <stdio.h>

int main(void)
{
  int idizi[100];
  int id1, id2=0, id3=0;

  for (id1=0; id1<100; id1++) {
       idizi[id1] = id1;
       if (id1%2) id3 += idizi[id1];
       else id2 += idizi[id1];
  }

  printf("Dizideki cift sayilarin toplami: %d\n", id2);
  printf("Dizideki tek sayilarin toplami: %d", id3);

  return 0;
}
