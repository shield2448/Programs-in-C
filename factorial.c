#include <stdio.h>
int main() {
    int n,i; 
    float fac = 1;  
    printf("Enter a Number = ");
    scanf("%d", &n);
    if (n < 0) {
        printf("INVALID INPUT \n");
    } 
    else {
        printf("%d! = ", n); 
        for (i = n; i > 1; i--) {
            printf("%d*", i);
            fac*= i;
        }
        printf("1 = %f \n", fac);
    }
    return 0;
}
