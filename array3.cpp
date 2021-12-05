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
    int max=num[0];
	for(i=0;i<10;i++)
	{
		if(max<num[i])
		max=num[i];
		}	
		printf(" Max number=%d\n",max);
}
