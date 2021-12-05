#include<stdio.h>
main()
{
	int array[5],i,pos,item;
	printf("Enter the array elements;\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the location\n");
	scanf("%d",&pos);
	
	printf("Enter the item\n");
	scanf("%d",&item);
	for(i=4;i>=pos-1;i--)
	{
		array[i+1]=array[i];
	}
		array[pos-1]=item;
	printf("Our array is the \n");
	for(i=0;i<6;i++)
	{
		printf("%d ",array[i]);
	}
		
}
