#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int n, temp;
	int N[100];
	float avgam, avgduong, sumam, sumduong, cam, cduong;
	float c0=0;
	int i;
	do
	{
		printf("co bao nhieu so n: ");
		scanf("%d",&n);
	}
	while(n>=10);
	{
	printf("\nn thoa man dieu kien de bai");
	}
	for(i=1;i<=n;i++)
	{
		printf("\ncho biet gia tri cua so N[%d]= ",i);
		scanf("%d",&temp);
		N[i]=temp;
	}
	printf("\n day so N la: ");
	for(i=1;i<=n;i++)	
	printf("%4d",N[i]);
	for(i=1;i<=n;i++)
	{
		if(N[i]<0)
		{
			sumam=sumam+N[i];
			cam=cam+1;
			avgam=sumam/cam;	
		}
	
		else if(N[i]>0)
		{
			sumduong=sumduong+N[i];
			cduong=cduong+1;
			avgduong=sumduong/cduong;
		}	
		else 
		{
			c0=c0+1;
		}
	}
	printf("\ncac so bang 0 la = %2.0f",c0);
	printf("\ntrung binh cac so am = %2.0f",avgam);
	printf("\ntrung binh cac so duong = %2.0f",avgduong);
	
	getch();
}
