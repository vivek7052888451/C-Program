#include<stdio.h>
main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		char a='A';
		for(c=1;c<=r;c++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	}
}
