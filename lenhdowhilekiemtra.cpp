#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
int main()
{
	int a[10];
	int n, i, x, c;
	c=0;
	do
		{
		printf("Moi nhap cac so trong mang n: "); 
		scanf("%d",&n);
		}
	while(n<0 || n>10);
		printf("\n so n thoa man dk ");
	for (i=1;i<=n;i++)
		{
		printf("\n a[%d]= ",i);
		scanf("%d", &a[i]);
		}
	for( i=1;i<=n;i++)
		printf("%d ",a[i]);
	
	do
		{
		printf("\nnhap so x:   ");
		scanf("%d",&x);
		}
	while(x>=10);
		printf("\n so x thoa man ");
	for(i=0;i<=n;i++)
		{
		if(a[i]==x)
			c=c+1;
		}	
	printf("\nso bang x la: %d",c);
	getch();
}

