#include<stdio.h>
void max(int,int );
int main()
{
	max(3,4);
}
void max(int x,int y)
{
	
   if(x>y)
   {
   	printf("x is greater");
   }
   else if(x<y)
   {
   	printf("y is greater");
   }
   
   else
   {
   	printf("they both are equal");
   }
   	
}