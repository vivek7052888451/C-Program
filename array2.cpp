#include<stdio.h>
main()
{
	int num[10],sum=0;
	float a;
	printf("Enter 10 numbers\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	   
	}
	a=sum/10;
	printf("\nSum=%d and average=%f",sum,a);
}
