#include <stdio.h>
int main()
{
	int yas,kilo;
	float vkt,boy;
	
	printf("Yasinizi giriniz: ");
	scanf("%d", &yas);
	printf("Kilonuzu giriniz (kg): ");
	scanf("%d", &kilo);
	printf("Boyunuzu giriniz (m): ");
	scanf("%f", &boy);
	
	vkt = kilo / ( boy * boy );
	printf("Vucut kutle indexiniz: %.2f", vkt);
	
	if( 13 <= yas && yas <= 17 && 18.50 <= vkt && vkt <= 24.99 )
		printf("\nTebrikler askeri liseye girdiniz!");
	
	else
	 	printf("\nUzgunuz askeri liseye giremediniz.");
	 
    
    
	return 0;
}
