#include <stdio.h>
int main() {
    int n,s=0; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    if(n>0){
    for(int i=1,j=n;i<=n && j>=1;i++,j--) 
    {
        s+=i;
    printf("%d \n",j);
    }   
    printf("sum = %d",s);
    }
    else
        printf("Invalid limit");
    return 0;
}
