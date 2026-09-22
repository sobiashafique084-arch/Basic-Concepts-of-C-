#include<stdio.h>
#include<math.h>
int palindromic(int);
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
	 if(palindromic(num))
	 {
	 	printf("palindromic");
	 	
	 }
	 else
	 {
	 	printf("not a palindromci number");
	 }
	return 0;
}
	int palindromic(int x)
	{
		int original=x;
		int remainder,reversed=0;
			while(x!=0)
			{
			  remainder=x%10;
			  reversed=reversed*10+remainder;
		      x=x/10;		
			}
		return original==reversed;
	}
