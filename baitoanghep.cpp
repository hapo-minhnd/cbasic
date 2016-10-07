#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
int main ()
	{
		int a[100];
		int c, i, max, n;
		printf("Moi nhap so nguyen n: "); scanf("%d",&n);
		for( i=1;i<=n;i++)
		{
			int temp;
				printf("\n cho biet gia tri cua a[%d]= ",i);
				scanf("%d", &temp);
				a[i]=temp;
		}	
		c= 0;
		max = a[1];
		for (i=1;i<=n;i++)
			if (a[i] > max)
				{	
					a[i] = max;
					break;
				}
		for (i=1;i<=n;i++)
			if (a[i] == max)
				c=c+1;
			
		printf("\nco %d so lon nhat ", c);
		printf("\nso %d lon nhat ", max);
	getch();
	}
