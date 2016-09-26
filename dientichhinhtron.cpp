#include"stdio.h"
#include"conio.h"
#include"math.h"

main ()
{
	float r,cv,dt;
	printf("\nBan kinh r= ");
    scanf("%f", &r);
	cv = 2*M_PI*r; dt = M_PI*r*r;
	printf("\nCHu vi= %10.2f\nDien tich= %10.2f", cv,dt);
	getch();
}

