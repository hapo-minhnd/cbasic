#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int x, y, z, k;		//k la gia tri cua bieu thuc con//
	printf("nhap 3 so thuc x y z lan luot\n");
	scanf("%d%d%d",&x ,&y ,&z);
	k = (x-z*cos(y));
	int tri_tuyet_doi = abs(k);
	int F = ((x+y+z)/(x*x+y*y+1) - tri_tuyet_doi);
	printf("gia ki cua F = %d", F);
	getch();

}
