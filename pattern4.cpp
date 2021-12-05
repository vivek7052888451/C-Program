#include<stdio.h>
main()
{
	int r,c,s,tr;
	tr=5;
	for(r=1;r<=tr;r++)
	{
		for(s=1;s<=tr-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r*2-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
