#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"math.h"
float giai_thua(float x)
{
	float giaithua=1;
	for(float i=1;i<=x;i++)
		giaithua=giaithua*i;	
	return (giaithua); 
}
int main()
{
	float epsilon, n;
	float x=1;
	float i=0;
	do
	{
		printf("Moi nhap so epsilon:  "); 
		scanf("%f",&epsilon);
	}
	while(epsilon>=1);
		printf("\n so epsilon thoa man dk ");
	do
	{
		i=i+1;
		x=x+(1/(giai_thua(i)));
	}
	while ((1/giai_thua(i))>=epsilon);
		printf("\ngia tri bieu thuc e: %0.2f",x);
	getch();	
}
	
		
	
	
	


