#include <stdio.h>
int main() {
    int i=1,n; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    do{
        printf("%d \n",i);
        i++;
    }while(i<n);
return 0;
}