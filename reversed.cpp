#include<stdio.h>
#include<math.h>
int reversed(int);
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	int r=reversed(num);
	printf("%d",r);
	
	return 0;
}
	int reversed(int x)
	{
		int original=x;
		int remainder,reversed=0;
			while(x!=0)
			{
			  remainder=x%10;
			  reversed=reversed*10+remainder;
		      x=x/10;		
			}
		return reversed;
	}
