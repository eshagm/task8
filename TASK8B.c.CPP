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
	printf("the number c=");
	scanf("%d",&c);

	if (a<b)
	{
	 if(a<c)
	  {
	    printf("A is minimum");
	  }
	 else
	  {
	    printf("C is minimum");
	  }
	}
	else
	{
	  if(b<c)
	  {
	    printf("B is minimum");
	  }
	 else
	  {
	    printf("C1 is minimum");
	  }
	}

	getch();
}                  