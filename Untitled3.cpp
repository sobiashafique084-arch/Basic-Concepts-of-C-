#include <stdio.h>
int main() {
    char even [2][2] = {{1,2},{3,4}};
    int count=0;
    for(int i = 0; i < 2; i++) 
	{
    	for(int j=0;j<2;j++)
    	{
    		if(even[j][j]%2==0)
    		{
    			count++;
			}
		}
    }
    printf("%d total number of even numbers in an array",count);
    return 0;
}
