#include <stdio.h>
int main() {
    int n,number; 
    printf("Enter the limit for Pascal's triangle: ");
    scanf("%d", &n);
     if(n>0){
    for (int i = 0; i< n; i++) {
         number = 1;
        for (int j = 0; j < n - i; j++) 
            printf("  ");
for (int j = 0; j <= i; j++) {
            printf("%3d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    }
    else
    printf("Invalid limit");
    return 0;
}
