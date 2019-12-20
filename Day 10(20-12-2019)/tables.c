#include<stdio.h>
main()
{
	int a,b;
	for(a=10;a>=1;a--)
	{
		for(b=1;b<=20;b++)
		{
			printf("\n %d x %d=%d",a,b,a*b);
		}
		printf("\n\n");
	}
}
