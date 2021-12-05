#include<stdio.h>
main()
{
	int i,t1=1;
	int sum=0;
	int a;
	printf("Enter the value ----");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	printf("%d",t1);
	if(i<a)
	{
	printf("+  ");	
	}
	sum=sum+t1;
	t1=(t1*10)+1;
}
printf("=%2d",sum);
}

