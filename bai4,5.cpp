#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
int main()
{
	int n, i, sum;
	do
	{
		printf("Moi nhap so n: "); 
		scanf("%d",&n);
	}
	while(n<10 || n>100);
		printf("\n so n thoa man dk ");
	for(i=1;i<=n;i++)
		sum=sum+i;
	printf("ket qua tong cac so tu 1 den n là: %d",sum);
	getch();
}
