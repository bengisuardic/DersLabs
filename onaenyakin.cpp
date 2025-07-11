#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int dizi[8] = {2,15,-3,7,9,56,-10,100};
int dizi2[64][3];
int i,j, toplam, counter=0;
for (i=0;i<8;i++)
{
for(j=i+1;j<8;j++)
{
dizi2[counter][0]= dizi[i];
dizi2[counter][1]= dizi[j];
dizi2[counter][2]= dizi[i] + dizi[j];
counter++;
}
}

int min =fabs( 10-dizi2[0][2]);
int location =0;
for(i=0;i<64;i++)
{
if(min> fabs(10-dizi2[i][2]))
{
min = fabs( 10-dizi2[i][2]);
location = i;
}
}

printf ("10'a en yakin ikili: %d %d", dizi2[location][0], dizi2[location][1]);

return 0;
}
