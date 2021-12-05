#include<stdio.h>
main()
{
	int a=1,b;
	printf("Enter value of b:");
	scanf("%d",&b);
	while(a<=10)
	{
		printf("%d\n",a*b);
		a++;
	}
}
