#include <stdio.h>
int main() {
    int i,n,m,p,q,r,s=0,c=0,v; 
    printf("Enter the number : ");
    scanf("%d", &n);
    m=n;
    while(n!=0)
    {
     q=n/10;
     r=n%10; 
     n=q;
     p=1;
    for(i=1;i<=r;i++)
     p=p*i;
     s=s+p;
    }
    if(s==m)
    printf("krishnamurthy no. %d",m);
    else
    printf("Not a krishnamurthy no.");
    return 0;
}
