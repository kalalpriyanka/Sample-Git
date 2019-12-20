#include<stdio.h>
main()
{
	int r,n,sum=0;
	printf("\n enter n values:");
	scanf("%d",&n);
		while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("\n sum of digits :%d", sum);
}
