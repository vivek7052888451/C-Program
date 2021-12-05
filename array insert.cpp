#include<stdio.h>
main()
{
	int size[10];
	printf("Enter the array elements");
	for(int i=0;i<=10;i++)
	{
		scanf("%d",&size[i]);
	}
	printf("our array is the :");
	for(int i=0;i<=10;i++)
	{
		printf("%d",size[i]);
	}
}
