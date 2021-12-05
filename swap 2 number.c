#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of a =%d and b=%d number:",a,b);
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d and b=%d",a,b);
}
