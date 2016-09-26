#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int a, b, n, i, UCLN;
	printf("\nnhap so a = ");
	scanf("%d", &a);
	printf("\nnhap so b = ");
	scanf("%d", &b);
	if (a<=b) n=a ;
	else n=b;
    for (i=n; i>= 1;i--)
	if (( a % i == 0) && (b % i == 0))
{	
	UCLN = i;
	break;
}
if(UCLN)	
printf("\n  UCLN %d ", UCLN);
else
printf("\n khong co UCLN");
	getch();
}
