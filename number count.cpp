#include<stdio.h>
#include<math.h>
int numcount(int);
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	 int r=numcount(num);
	 printf("%d",r);
	return 0;
}
	int numcount(int x)
	{
		
		int count=0;
		
		
			while(x!=0)
			{
			  
		      x=x/10;
		      int num=x;
		      num=num%10;
		      count++;		
			}
		return count;
	}
