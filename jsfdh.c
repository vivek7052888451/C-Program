#include<stdio.h>
main()
{
	int n,count,a=0,b=1,c;
	printf("Enter a number to find sirise-");
	scanf("%d",&n);
	printf("The series is \n");
	printf("%d %d",a,b);
	count=2;
	while(count<n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%5d",c);
		count++;
	}
}
