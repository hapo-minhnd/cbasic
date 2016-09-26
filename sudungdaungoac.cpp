#include"stdio.h"
#include"conio.h"

	
main()
{
	
	int a, b = 20;
	int c, d = 40;
	float e = -22.11;
	float x = 24, y, z, t = 36.1;

	a = c = 10;
	y = x = z = a + b + c + d;
	{
		float y, z;
		y = z = e + x + y;
		printf("\n  y trong = %2f\n z trong = %2f", y, z);
		
	}
	printf("\n\n y ngoai = %2f\n z ngoai = %2f", y, z);
	getch();
}
