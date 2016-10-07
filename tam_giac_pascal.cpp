#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int i, j, n;
		int a[100][100];
		printf("Moi nhap so nguyen n: "); scanf("%d",&n);
		system("cls");
		a[1][1]=1;
		for(j=1;j<=n;j++)
			{
				for(i=1;i<=n;i++) 
				if (i!=j||i!=1) a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
	
		printf("\n");
		system("pause");
		return 0;
	}
