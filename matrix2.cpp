#include<stdio.h>
main()
{
	int array[3][4];
	int r,c;
	printf("Enter the matrix of 3*4=\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			scanf("%d",&array[r][c]);
		}
	}
	printf("\n Enterd Matrix-\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d  ",array[r][c]);
		}
		printf("\n");
	}
}
