#include <stdio.h>
#include <stdlib.h>

#define SHOPS 12
#define WAREHOUSES 12
#define PRODUCTS 3
#define PLANTS 2

int main() {
	int i,j;
	int supplies[PLANTS][PRODUCTS] = {{4500,5000,2000},{6000,2000,8000}};
	int demands[PRODUCTS][SHOPS] = {{900,360,1300,800,320,450,2000,1000,400,300,700,450},{450,240,700,500,280,300,1000,500,300,150,300,250},{800,480,1200,900,240,450,800,1200,450,300,800,400}};
    
    printf("\nSupplies:\n");
    for (i = 0; i < PLANTS; i++) {
    	for(j=0;j<PRODUCTS;j++)
        printf("%d\t", supplies[i][j]);
    }

    printf("\nDemand:\n");
    for (i = 0; i < PRODUCTS; i++) {
    	for(j=0;j<SHOPS;j++)
        printf("%d\t", demands[i][j]);
    }

    return 0;
}


