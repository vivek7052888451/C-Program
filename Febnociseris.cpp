#include<stdio.h>
main()
{
	int a=0,b=1,count,c;
	int size;
	printf("Enter the value of size of seris-");
	scanf("%d",&size);
	printf("The size is\n");
	printf("%d  %d  ",a,b);
	count=2;
	while(count<size)
	{
		c=a+b;
		a=b;
		b=c;
		
		printf("%d ",c);
		count++;
	}
	
}
