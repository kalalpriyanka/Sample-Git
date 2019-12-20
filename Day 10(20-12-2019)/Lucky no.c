#include<stdio.h>
#include<stdlib.h>
main()
{
	int r,n,sum=0;
	printf("\n enter n value");
	scanf("%d",&n);
	test: while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	if(sum<10)
	printf("\n Lucky no :%d",sum);
	else
	{
		n=sum;
		sum=0;
		goto test;
		printf("\n%d",sum);
	}
}
