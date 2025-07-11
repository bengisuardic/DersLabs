#include <stdio.h>
#include <math.h>
struct point3d{
	int x;
	int y;
	int z;
};
int main()
{
	struct point3d s[5];
	int i,d,p1,p2,j;
	int min = sqrt(pow(s[0].x - s[1].x,2) + pow(s[0].y - s[1].y,2) + pow(s[0].z - s[1].z,2));
	
	for (i=0;i<5;i++){
		printf("Enter %d point: ", i+1);
		scanf("%d %d %d", &s[i].x, &s[i].y, &s[i].z);
	}
	for (i=0;i<4;i++)
	  for(j=i+1;j<5;j++){
	  	d = sqrt(pow(s[i].x - s[j].x,2) + pow(s[i].y - s[j].y,2) + pow(s[i].z - s[j].z,2));
	  	if(d<min){
	  		min = d;
	  		p1 = i;
	  		p2 = j;
		  }
	  }
	printf("Closest points are %d. and %d. points and the distance between them is %d", p1+1, p2+1, min);
	return 0;
}
