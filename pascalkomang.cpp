#include<stdio.h>
#include<conio.h>
int tohop(int n, int k)
{
 if (k == 1 || k == n) return 1;
 return tohop(n - 1, k - 1) + tohop(n - 1, k);
}
main()
{
 int n;
 printf("N="); scanf_s("%d", &n);
 for (int i = 1; i <= n; i++)
 {
  for (int j = 1; j <= i; j++)
  {
   if (j == 1)
   {
    for (int m = 1; m <= n - i;m++) printf("   ");
   }
   printf("%2d    ", tohop(i, j));
  }
  printf("\n\n");
 }
}
