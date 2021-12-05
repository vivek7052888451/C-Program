#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j>=2 && j<(i*2))
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
