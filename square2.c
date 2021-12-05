#include<stdio.h>
main()
{
	int i,t=1,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("%1d",i);
		if(i<=10)
		{
			printf("+ ");
		}
		sum=sum+t;
    }
    printf("=%d",sum);
}
