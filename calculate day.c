#include<stdio.h>
main()
{
	int day,year,month,weak;
	printf("Enter the total day:\n");
	scanf("%d",&day);
	year=day/365;
	month=(day%365)/7;
	weak=(day%365)%7;
	printf("%d=%d year ,%d weeks,%d days \n",day,year,month,weak);
}
