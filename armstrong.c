#include <stdio.h>
int main() {
    int i,n,m,p,q,r,s=0,c=0,v; 
    printf("Enter the number : ");
    scanf("%d", &n);
    m=n; 
     while(n!=0)
     {
      n=n/10;
      c++;  
     }
    n=m; 
    while(n!=0)
    {
     q=n/10;
     r=n%10; 
     n=q;
     p=1;
    for(i=1;i<=c;i++)
     p=p*r;
     s=s+p;
    }
    if(s==m)
    printf("Armstrong no. %d",m);
    else
    printf("Not a Armstrong no.");
    return 0;
}
