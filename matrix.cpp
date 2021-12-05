//multidimentional array

#include<stdio.h>
main()
{
	int a[3][3],r,c;
	printf("Enter A Matrix of 3*3=\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("Enterd Matrix of 3*3=\n");
	for(r=0;r<3;r++)
	{
	  for(c=0;c<3;c++)
	  {
	  	printf("%d ",a[r][c]);
	  }
	  printf("\n");
	}
}
