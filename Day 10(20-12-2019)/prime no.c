#include<stdio.h>
main()
{
	int i,j,k,count,n;
	printf("\n enter n value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=i,k=1;k<=j;k++)
		{
			if(j%k==0)
			count++;
		}
		if(count==2)
		printf("\n%d",j);
	}
}       
