#include<stdio.h>
#include<math.h>
int main() {
    int n,p,l,u,i;
    printf("Enter the upper and lower limit : ");
    scanf("%d \n %d",&l,&u);
    printf("Prime no.s between this range");
    for(n=l;n<=u;n++){
        p=0;
    for(i=2;i<n;i++){ 
    if(n%i==0)
    p++;
     }
    if(p==0)
    printf("\n %d",n);
    }
    return 0;
}