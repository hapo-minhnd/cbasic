#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	float lk2,bl,n,lk1;
	
	printf("\n  nhap cac so bl= ");
		scanf("%f", &bl);
	printf("\n  nhap cac so n= ");	
	scanf("%f", &n);
	printf("\n  nhap cac so lk1= ");
		scanf("%f", &lk1);
		
    lk2 = (bl * n) / 26 - lk1;
	printf("\n lk2 = %f", lk2); 
	getch();
	}
