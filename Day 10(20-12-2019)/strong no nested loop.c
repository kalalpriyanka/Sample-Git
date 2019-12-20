#include<stdio.h>
main()
{
	int n,r,i,fact,sum=0,temp;
	printf("\n enter n value :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
	    sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("\n strong number");
	else
	printf("\n not a strong number");
}
