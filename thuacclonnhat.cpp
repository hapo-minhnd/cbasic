#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
int main()
{
	int a[10];
	int n, i, x, c;
	printf("Moi nhap cac so trong mang n: "); 
	scanf("%d",&n);
	for( i=1;i<=n;i++)
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
	while(x>10);
		printf("\n so x thoa man  ");	
	}

