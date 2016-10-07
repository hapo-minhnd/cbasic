#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int x, y, z, F, k;		//k la gia tri cua bieu thuc con//
	printf("nhap 3 so thuc x y z lan luot\n");
	scanf("%d%d%d",&x ,&y ,&z);
	k = (x-z*cos(y));
	int tri_tuyet_doi = abs(k);
	F = (x+y+z)\(x*x+y*y+1) ;
	printf("gia ki cua F = %d", F);
	getch();

}
