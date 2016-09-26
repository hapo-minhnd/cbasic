
#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int n, i, c;
	c= 0;
	printf("\nnhap so n = ");
	scanf("%d", &n);
	for (i=2;i<=n-1;i++)
	{
		if (n%i == 0)
			  c = c + 1;
	}
	if ( c >= 1)
		printf("\n %d khong phai la so nguyen to ", n);
	else
		printf("\n la so nguyen to ");
	getch(); 
}
