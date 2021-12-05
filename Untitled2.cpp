#include<stdio.h>
main()
{
	 int t1=0,t2=1,next;
  for(int a=1; a<=10; a++)
   {
   	next=t1+t2;
   	printf("%d ",next);
   	t1=t2;
   	t2=next;
   }

}
