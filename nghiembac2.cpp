#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int a, b, c, delta, x1, x2;
	printf("\n nhap cac gia tri a = ");
	scanf("%d", &a);
	printf("\n nhap cac gia tri b = ");
	scanf("%d", &b);
	printf("\n nhap cac gia tri c = ");
	scanf("%d+", &c);
	delta = (b * b - 4 * a * c)  ;
	
	x1 = (-b - sqrt(delta)) / 2 * a , x2 = (-b + sqrt(delta))/ 2 * a ;
	printf("\n x1 = %0.2d\n x2 = %0.2d", x1, x2);
	getch();
	
}
