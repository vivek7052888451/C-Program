#include<stdio.h>
main()
{
	int a,fact=1;
	printf("Enter a number-");
	scanf("%d",&a);

	
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
}
printf("%d",fact);
}
