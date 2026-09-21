#include <stdio.h>
int main() {
    char max [2][2] = {{1,2},{3,4}};
    int maximum =max[0][0];
    for(int i = 0; i < 2; i++) 
	{
    	for(int j=0;j<2;j++)
    	{
    		if(max[i][j]>maximum)
    		{
    			maximum=max[i][j];
			}
		}
    }
    printf("%d maximum number in array",maximum);
    return 0;
}
