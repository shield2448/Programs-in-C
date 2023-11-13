#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
    {
    int n, s, m, d;
    int x =0;
 
    printf("Enter a number = ");
    scanf("%d",&n);
    s = n*n;  
    m = n;
 
    
    while(m>0){
        x++;
        m = m/10;
    }
   int a = floor(pow(10,x));
    d = s % a;
 
    if(d == n)
        printf("Automorphic number %d",n);
    else
        printf("Not Automorphic %d",n);
    return 0;
}