#include <stdio.h>
int main() {
    int n; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    if(n>0){
for (int i =1; i<n; i++) {
    if(i==1){
for(int k=1;k<=((2*n)-1);k++)
        printf("*");
        }
        printf("\n");
for (int j=n; j>i; j--) {
        printf("*");
        }
for (int j = 1; j<=((2*i)-1); j++) {
        printf(" ");
        }
        for(int j=n;j>i;j--){
        printf("*");
        }
    }
    }
    else
        printf("Invalid limit");
    return 0;
}
