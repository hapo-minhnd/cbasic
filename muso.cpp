#include"stdio.h"	
#include"math.h"
main()
{
	double x,y,z;
	printf("\n vao x va y");
	scanf("%lf%lf",&x,&y);
	z= pow(x,y);
	fprintf(stdout,"\nx = %8.2lf\ny = %8.2lf\nz = %8.2lf", x,y,z);
}
