#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    for(int i = 0; i < 2; i++) {
        int sum = 0;
        for(int j = 0; j < 2; j++) {
            sum =sum+ a[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }
    return 0;
}
