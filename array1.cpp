//array
#include<stdio.h>
main()
{
	int marks[10];
	printf("Enter 10 numbers:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("\nEnterd numbers:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d  ",marks[i]);
	}
	
}
