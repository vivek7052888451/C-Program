#include<stdio.h>
main()
{
	int a;
	printf("Enter a number.");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("This is a leap year.");
	}
	else
	{
		printf("Not leap year.");
	}
}
