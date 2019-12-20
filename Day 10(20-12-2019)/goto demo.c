#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=1;
	test:
		{
			printf("\n%d",a);
			a++;
			
		}
		if(a<=20)
		goto test;
}
