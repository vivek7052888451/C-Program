#include<stdio.h>
#include<string.h>
main()
{
	float selary,bonus;
	char gender;
	printf(" Enter M of Male and F of Female:\n");
	scanf("%c",&gender);
	printf("Enter the selary: ");
	scanf("%f",&selary);
	if(gender=='M'||gender=='m')
	{
	if(selary>10000)
	   {
		bonus=(float)(selary*.05);
	   }
	   else
	   {
	   	bonus=(float)(selary*0.1);
		   }	
	}
	if(gender=='F'||gender=='f')
	{
	if(selary>10000)
	{
	bonus=(float)(selary*0.1);	
		}
		else
		{
			bonus=(float)(selary*0.12);
			}	
	}
	selary+=bonus;
	printf("Bonus=%.2f\nselary=%.2f\n",bonus,selary);
}
