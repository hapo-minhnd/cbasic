#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
	int x, y, z, F, k;		//k la gia tri cua bieu thuc con//
	printf("nhap 3 so thuc x y z lan luot\n");
	scanf("%d%d%d",&x ,&y ,&z);
	k=(x-z*cos(y));
	int h = cos(y);
	printf("\n gia tri%d ",h);
	printf("\n gia tri k la %d ", k);
	int tri_tuyet_doi = abs(k);
	 printf("\ngia tri tuyet doi cua k la %d\n", tri_tuyet_doi);

}
