#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	int a,b,c,d,e;
	printf("the number A=");
	scanf("%d",&a);
	printf("the number B=");
	scanf("%d",&b);
	printf("the number C=");
	scanf("%d",&c);
	printf("the number D=");
	scanf("%d",&d);
	printf("the number E=");
	scanf("%d",&e);

	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is maximum"):printf("D is maximum"):printf("C is maximum"):printf("E is maximum"):(b>c)?(b>e)?printf("B is maximum"):printf("C1 is maximum"):printf("E1 is maximum");
	getch();
}                  