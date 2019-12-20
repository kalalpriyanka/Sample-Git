#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\n enter n values:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
if(sum==n)
printf("\n %d is perfect",n);
else
printf("\n %d not perfect no",n);
}
