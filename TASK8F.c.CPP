#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	int a,b,c,d;
	printf("the number A =");
	scanf("%d",&a);
	printf("the number B =");
	scanf("%d",&b);
	printf("the number C =");
	scanf("%d",&c);
	printf("the number D =");
	scanf("%d",&d);

	(a>b)?(a>c)?(a>d)?printf("A is maximum"):printf("C is maximum"):printf("D is maximum"):(b>c)?(b>d)?printf("B is maximum"):printf("C1 is maximum"):printf("D1 is maximum");
	getch();
}