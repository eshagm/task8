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

	if(a<b)
	{
	    if(a<c)
	    {
		if(a<d)
		{
		    if(a<e)
		    {
			printf("A is minimum");
		    }
		    else
		    {
			printf("E is minimum");
		    }
		}
	    }
	}
	else
	{
	   if(b<c)
	   {
	       if(b<d)
	       {
		    if(b<e)
		    {
			printf("B is minimum");
		    }
		    else
		    {
			printf("E1 is minimum");
		    }
	       }
	   }
	}
	getch();
}