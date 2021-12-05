#include<stdio.h>
main()
{
	int n,sum=0,t=1;
	int i;
	printf("Enter a value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d",t);
	if(i<n)
	{
		printf("+ ");
	}
	sum=sum+t;
	t=t+1;
}
	printf("=%1d",sum);
	
}

