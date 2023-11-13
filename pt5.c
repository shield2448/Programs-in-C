#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("INVALID INPUT");
    }
    for (int i=1;i<n;i++) {
        if(i==1){
for(int k=1;k<=((2*n)-1);k++)
        printf("*");
        printf("\n");
        }
        for (int j=n;j>i;j--) {
        printf("*");
        }
        for (int k=1; k<=((2*i)-1);k++) {
        printf(" ");
        }
        for (int j=n; j>i;j--) {
        printf("*");
        }
        printf("\n");
    }
    for (int i=n-2;i>=1;i--) {
        for (int j=n;j>i;j--){
        printf("*");
        }
        for (int k=((2*i)-1);k>=1;k--){
        printf(" ");
        }
        for (int j=n;j>i;j--){
        printf("*");
        }
        printf("\n");
        if(i==1){
for(int k=1;k<=((2*n)-1);k++)
        printf("*");
         printf("\n");
        }
    }

    return 0;
}
