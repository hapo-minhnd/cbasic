#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x;
	float r, S;
	printf("\ntinh s hinh tron chon 1");
	printf("\ntinh s hinh vuong chon 2");
	printf("\ntinh s tam giac deu chon 3");
	printf("\nthoat truong trinh nhan 4");
	do
	{
		printf("\nnhap truong trinh muon thuc hien ");
		scanf("%d", &x);
		if (x==1)
		{
			printf("\n nhap ban kinh ");
			scanf("%f", &r);
			S=3.14*r;
			printf("dien tich hinh tron la: %f", S);
		}
		else if (x==2)
		{
			printf("\n nhap cach hinh vuong ");
			scanf("%f", &r);
			S=4*r;
			printf(" dien tich hinh vuong la: %f", S);
		}
		else if (x==3)
		{	printf("\n nhap cach hinh tam giac deu ");
			scanf("%f", &r);
			S= r*r*(sqrt(3)/4);
			printf("dien tich tam giac deu la: %f", S);
		}
		else 
		{
			printf("\n khong co truong trinh ");	
		}
	}
	while(x != 4);
		printf(" \nket thuc truong trinh ");
	getch();
	return 0;	
}
