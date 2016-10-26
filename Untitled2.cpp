#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x, y, max, min, c;
	printf("nhap so x va y: ");
	scanf("%f%f",&x ,&y);
	max=x*sin(y);
	min=y*cos(x);
	c=x*y*tan(x*y);
	{
		if (max<min)
			min=max;
		if (max<c)
			max=c;
	printf("gia tri lon nhat la %f ",max);
	}
	{
		if (min>max)
			min=max;
		if (min>c)
			min=c;
		printf("gia tri be nhat la %f ",min);
	}
	getch();
}
	
		

	
	
	
	

