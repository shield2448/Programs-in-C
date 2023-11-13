#include<stdio.h>
#include<math.h>
int main() {
    int n,m,p=0,i;
    printf("Enter no. = ");
    scanf("%d" ,&n);
    if(n==0 || n==1)
    printf("NPNNP");
    for(i=2;i<n;i++){ 
    if(n%i==0){
    p++;
    } }
    if(p==0)
    printf("Prime no. %d",n);
    else
    printf("Non-Prime no. %d",n);
    return 0;
}