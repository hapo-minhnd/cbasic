#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int m[100];	
	int i, j, k, n;
	printf("cho biet so phan tu co trong mang: ");
	scanf("%d", &n);
	for( i=0;i<n;i++)
	{
		int temp;
			printf("\n cho biet gia tri cua m[%d]= ",i);
			scanf("%d", &temp);
			m[i]=temp;
	}
}
