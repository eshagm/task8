#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b;
	printf("the number A =");
	scanf("%d",&a);
	printf("the number B =");
	scanf("%d",&b);

	(a>b)?printf("A is maximum "):printf("B is maximum ");
	getch();
}                  