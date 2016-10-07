#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int a, b, c;
	printf("nhap cac so a b c lan luot\n");
	scanf("%d%d%d",&a ,&b ,&c );
	if (a+b<=c || a+c<=b || b+c<=a)
	{	
		printf("day khong phai 3 canh cua 1 tam giac");
	}
	else 
	{
		printf("day la do dai 3 canh cua 1 tam giac");
			if (a==b && b==c)
				printf("\nday la tam giac deu");
			else if ((a==b && b!=c)|| (a==c && a!=b) || (b==c && b!=a))
				printf("\nday la tam giac can");
			else if (sqrt(a)==pow(b,2)+pow(c,2) || sqrt(b)==pow(a,2)+pow(c,2) || sqrt(c)==pow(b,2)+pow(a,2))
				printf("\nday la tam giac vuong");
			else
				printf("\nday la tam giac thuong");
	}
		
	getch();	
}
