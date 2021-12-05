#include<stdio.h>
main()
{
	int r,c,s;
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(s=n-1 ;s>=r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
