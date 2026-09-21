#include <stdio.h>
int main() {
    char matrix [2][2] = {{1,5},{3,4}},copy[2][2];
    for(int i = 0; i < 2; i++) 
	{
    	for(int j=0;j<2;j++)
    	{
    	   copy[i][j]=matrix[i][j];
		}
    }
     for(int i = 0; i < 2; i++) 
	{
    	for(int j=0;j<2;j++)
    	{
    	   printf("%d",copy[i][j]);
		}
    }
   
    return 0;
}
