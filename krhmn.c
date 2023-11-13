#include <stdio.h>

int main() {
    int n,c,m,s,p,r;
    printf("Krishnamurthy numbers between 1 and 100,000:\n");
    for(n= 1;n<= 1000000000;n++) {
        m=n;
        s= 0;
        while(m>0){
            r=m % 10;
            p=1;
            for(int i=1;i<=r;i++){
                p*=i;
            }
            s+=p;
            m/= 10;
        }
        if(n==s){
            printf("%d\n",n);
        }
    }
    return 0;
}
