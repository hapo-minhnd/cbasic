#include"stdio.h"
#include<conio.h>
#include<math.h>
int main()
{
	int a[10], b[10], c[10];
	int n,temp;
	int d=0;
	int e=0;
	int tg;
	do
	{
		printf("co bao nhieu so n: ");
		scanf("%d",&n);
	}
	while (n>10);
	{	
		printf("\nso n thoa man dieu kien");
	}
	for(int i=1;i<=n;i++)
	{
		printf("nhap so a[%d]: ",i);
		scanf("%d",&temp);
		temp=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			b[i]=a[i];
			e=e+1;
		}
		else
		{
			c[i]=a[i];
			d=d+1;
		}	
	}
	printf("\nmang b: ");
	for(int m=1;m<=n;m++)
	{
	printf("%9d",b[m]);
	}
	printf("\nmang c: ");
	for(int n=1;n<=d;n++)
	{
	printf("%3d",c[n]);
	}
	getch();
}
