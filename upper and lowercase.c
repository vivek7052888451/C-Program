#include<stdio.h>
main()
{
	char a;
	printf("Enter A charecter=");
	scanf("%c",&a);
	int b=a;
	if(b>=65 && b<=90)
	{
		printf("Uppercase!");
	}
	if(b>=97 && b<=122)
	{
		printf("Lowercase!");
	}
}
