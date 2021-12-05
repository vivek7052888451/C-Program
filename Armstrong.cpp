#include<stdio.h>
#include<math.h>
main()
{
	int num,temp,nod=0,rem,sum,p;
	printf("Enter a number-");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
	temp=temp/10;
	nod++;
	}
	temp=num;
	while(temp>0)
	{
	rem=temp%10;
	p=pow(rem,nod);	
	sum=sum+p;
	temp=temp/10;
	}
	if(sum==num)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
}
