//max number form 10 numbers
#include<stdio.h>
main()
{
	int num[10],i;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
    int min=num[0];
	for(i=0;i<10;i++)
	{
		if(min>num[i])
		min=num[i];
		}	
		printf(" Min number=%d\n",min);
}
