#include<stdio.h>
main()
{
	int number,fact=1;
	printf("Enter the number:");
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		fact=fact*i;
	}
    printf("%d",fact);
}
