#include <stdio.h>
int main() {
    int n; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    if(n>0)
    {
for (int i =1; i<=n; i++) 
{
for (int j=1; j<=n-i; j++)
    printf("  ");
for (int j=1;j<=((2*i)-1);j++)
    printf("* ");
    printf("\n");
    }
    }
    else
    printf("Invalid limit");
    return 0;
}
