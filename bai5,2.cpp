#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	int m[100];	
	int i, j, n;
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
				if(m[i]>m[j])
				{
					int tg;			//tg : bien trung gian //
					tg=m[j];m[j]=m[i];m[i]=tg;
				}
			}
	}
	printf("day so theo chieu tang dan: ");
	for(i=0;i<n;i++)
	printf("%2d",m[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(m[i]<m[j])
				{
					int tg;			//tg : bien trung gian //
					tg=m[j];m[j]=m[i];m[i]=tg;
				}
			}
	}
	printf("\n");
	printf("day so theo chieu giam dan: ");
	for(i=0;i<n;i++)
	printf("%2d",m[i]);
	for(i=0;i<n;i++)
	{	
		if(m[i]>0)
			m[i]=m[i];
		else
			m[i]=m[i]*-1;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(m[i]<m[j])
				{
					int tg;			//tg : bien trung gian //
					tg=m[j];m[j]=m[i];m[i]=tg;
				}
			}
	}
	printf("\nday so theo chieu tuyet doi giam dan: ");
	for(i=0;i<n;i++)
	printf("%2d",m[i]);
	getch();	
}
