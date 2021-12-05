#include<stdio.h>
main()
{
	int num;
	printf("Enter the number-");
	scanf("%d",&num);
	int fact=1;
	int i;
	for( i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial=%d",fact);
}
