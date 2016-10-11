#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int n;
	int N[100];
	int i, temp, k;
	do
	
	{
		printf("co bao nhieu so n: ");
		scanf("%d",&n);
	}
	while(n>=10);
		printf("\nn thoa man dieu kien de bai");
	for(i=1;i<=n;i++)
	{
		printf("\ncho biet gia tri cua so N[%d]= ",i);
		scanf("%d", &temp);
		N[i]=temp;
	}
	printf("\n day so N la: ");
	for(i=0;i<=n;i++)	
	printf("%3d",N[i]);
	getch();
}
