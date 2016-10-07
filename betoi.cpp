#include"stdio.h"
#include"conio.h"

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
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(m[i]<m[j])
				{
					int tg;			//tg : bien trung gian //
					tg=m[j];
					m[j]=m[i];
					m[i]=tg;
				}
			}
	}
	for(k=0;k<n;k++)
	{	
		printf("%d",m[k]);
	}
	getch();	
}
