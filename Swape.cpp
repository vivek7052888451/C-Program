#include<stdio.h>
main()
{
	int a,b;
	printf("\n\nEnter the value of a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Your swap number-  a=%d and b=%d",a,b);
}
