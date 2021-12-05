#include<stdio.h>
main()
{
	int n,rem,sum=0,x;
	printf("Enter a number:\n");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("The sum of all digits in %d is %d\n",x,sum);
}
