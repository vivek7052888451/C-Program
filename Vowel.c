#include<stdio.h>
main()
{
	char a;
	printf("Enter a character=:");
	scanf("%c",&a);
	int b=a;
	if((b>=65 && b<=90)||(b>=97 && b<=122))
	{
	 if(a=='A' || a=='E' ||  a=='I' || a=='O' || a=='U'  || a=='a' || a=='e' || a=='i' || a=='o'|| a=='u')
	 {
	 	printf("Charecter is Vowel");
	 }
	 else
	 {
	 	printf("Charecter is Consonent");
	 }
	}
	else
	{
		printf("Invalid number");
	}
}
