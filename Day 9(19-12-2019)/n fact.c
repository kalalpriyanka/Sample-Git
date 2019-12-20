#include<stdio.h>
main()
{
	int i,n;
	printf("\n enter n values:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		printf("\n %d",i);
		i++;
	}
}
