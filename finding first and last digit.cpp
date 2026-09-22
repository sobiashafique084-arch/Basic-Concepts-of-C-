#include<stdio.h>
#include<stdlib.h>
int firstdigit(int);
int lastdigit(int);
int main()
{
	int num;
	printf("enter a number ");
	scanf("%d",&num);
    int r1=firstdigit(num);
     int r2=lastdigit(num);
    printf("%d  fist and last digit %d ",r1,r2);
	
}
int firstdigit(int x)
{
    while(x>=10)
	{
		x=x/10;
	}
	return x;	
}
int lastdigit(int y)
{
	if(y<0)
	{
		y= abs(y);
	}
	y=y%10;
	return y;
}


