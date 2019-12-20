#include<stdio.h>
main()
{
	int r,n,sum=0,temp;
	printf("\n enter three digit number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	printf("\n armstrong");
	else
	printf("\n not armstrong");
}
