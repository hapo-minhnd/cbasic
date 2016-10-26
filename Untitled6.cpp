#include<stdio.h>
#include<conio.h>
#include<math.h>
float giai_thua(float x)
{
	float giaithua=1;
	for(float i=1;i<=x;i++)
		giaithua=giaithua*i;	
	return (giaithua); 
}
int main()
{
	float y, p, x;
	int i, n;
	printf("\n cho x, n = ");
	scanf("%f%d", &x, &n);
	for(i=0;i<=n;i++)
		y=pow(-1,i)*pow(x,i)/giai_thua(i)+y;
	printf("\n y=%0.2f", y);
	getch();	
}
