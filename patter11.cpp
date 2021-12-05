#include<stdio.h>
main()
{
	int r,c,k;
	for(r=1;r<=5;r++)
	{
		for(c=r;c<5;c++)
		{
			printf(" ");
		}
		for(k=1;k<(r*2 );k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
