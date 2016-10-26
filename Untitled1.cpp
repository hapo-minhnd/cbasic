#include<stdio.h>
#include<conio.h>
int main()
{
	int cstruoc, csnay, n;
	float tien;
	printf("\n cho chi so thang truoc, chi so thang nay = ");
	scanf("%d%d",&cstruoc ,&csnay);
	n=csnay-cstruoc;
	if(n<=100)
		tien=n*500;
	else if(n<=150)
		tien=50000+(n-100)*800;
	else 
		tien=90000+(n-150)*1000;
	printf("\n so tien phai tra = %0.0f", tien);
	getch();
	
}
