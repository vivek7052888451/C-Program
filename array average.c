#include<stdio.h>
main()
{
	int i,j,sum=0,num;
	float ave;
	printf("Enter the numbers of student in the class- ");
	scanf("%d",&num);
	int marks[num];
	printf("Enter marks of all students-\n");
	for(i=1;i<=num;i++)
	{
	scanf("%d",&marks[i]);
	sum+=marks[i];	
	}
	ave=(float)sum/num;
	printf("Average of class is %f\n",ave);
}
