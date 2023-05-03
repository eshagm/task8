#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b,c;
	printf("the number A=");
	scanf("%d",&a);
	printf("the number B=");
	scanf("%d",&b);
	printf("the number C=");
	scanf("%d",&c);

	(a>b)?(a>c)?printf("A is maximum"):printf("C is maximum"):(b>c)?printf("B is maximum"):printf("C1 is maximum");
	getch();
}                  