#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	printf("Your value of swap before-\n %d and %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n");
	printf("Your value of after swap %d and %d",a,b);
}
