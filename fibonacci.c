#include <stdio.h>
int main() {
    int n,f1=0,f2=1,f,i;
    printf("Enter the no. of terms=");
    scanf("%d",&n);
    if(n<=0)
    printf("Invalid");
    else if(n==1)
    printf("\n %d",f1);
    else {
    printf("\n %d \n %d",f1,f2);
    for(i=3;i<=n;i++){
        f=f1+f2;
        printf("\n %d",f);
        f1=f2;
        f2=f;
    }
    }
    return 0;
}