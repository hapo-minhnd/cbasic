#include<conio.h>
#include<stdio.h>
#include<string.h>


int main()
{
	char dslop[10][30],*pdslop;
	int n,i,a,j;
	pdslop = (char*)dslop;
	char temp;
	do 
	{
		printf("nhap so n: ");
		scanf("%d",&n);
	}
	while(n>10);
		printf("\nso n thoa man dk");
	for(i=0;i<n;i++)				
	{
		printf("\nnhap vao mang dslops[%d]= ",i);
		scanf("%s",&dslop);
	}
	for(i=0;i<n;i++)
		for(int j=i+1;j<n-1;j++)
			if(strcmp(dslop[i],dslop[j])>0)
			{
			char tg[30];
			strcpy(tg,dslop[i]);
			strcpy(dslop[i],dslop[j]);
			strcpy(dslop[j],tg);
			}
		
	printf("\n ten sau khi sap xep: ");
	for(i=0;i<=n;i++)
	printf("%s ",dslop[i]);		
	getch();
}
