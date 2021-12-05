#include<stdio.h>
main()
{
	int r,c,s,tr=5;
	for(r=1;r<=tr;r++)
	{
		for(s=1;s<=tr-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r*2-1;c++)
		{
			if(c==1 || c==r*2-1 ||r==tr)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
