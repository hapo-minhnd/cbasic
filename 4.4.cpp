#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
int giai_thua(int x)
{
	int giaithua=1;
	for(int i=1;i<=x;i++)
		giaithua=giaithua*i;	
	return (giaithua); 
}
int main()
{
	int n , N, l, L;
	printf("nhap so n ");
	scanf("%d", &n);
	N = giai_thua(n);
	printf("%d",N);\
	printf("\nnhap so l ");
	scanf("%d", &l);
	L = giai_thua(l);
	printf("%d",L);
	getch();

}
		
		
	

