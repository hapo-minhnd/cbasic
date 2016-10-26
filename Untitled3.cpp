#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	printf(" do you like C language(y/n) ?");
	scanf("%c", &x);
	if ((x=='y') || (x=='Y'))
	printf("Very good! keep trying");
	else if ((x=='n') || (x=='N'))
	printf(" well ! you'll like it, soon ");
	else
	printf(" input error");
	getch();
}

