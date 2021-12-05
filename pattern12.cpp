 #include<stdio.h>
 main()
 {
 	int i,j,k,l,n;
 	printf("Enter the value of n:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		for(j=n;j>=i;j--)
 		{
 			printf(" ");
		 }
		 for(k=1;k<=i;k++)
		 {
		 	printf("*");
		 }
		 for(l=2;l<=i;l++)
		 {
		 	printf("*");
		 }
		 printf("\n");

	 }
 } 
