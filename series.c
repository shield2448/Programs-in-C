#include <stdio.h>
int main(){
    float s=1,fac; 
    int i,n,j;
    printf("Enter the limit = ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        fac=1;
        for(j=i;j>1;j--){
        fac=fac*j;
        }
        s=s+fac;
    }
    printf("%f",s);
    return 0;
}