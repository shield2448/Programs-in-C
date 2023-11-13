#include <stdio.h>

int main() {
    int n,c,m,s,p,r;
    printf("Armstrong numbers between 1 and 100,000:\n");
    for(n= 1;n<= 1000;n++) {
        m=n;
        s= 0;
        c= 0;
        while (m>0) {
            c++;
            m /= 10;
        }
        m=n;
        while (m>0) {
            r = m % 10;
            p= 1;
            for(int i=0;i<c;i++) {
                p*= r;
            }
            s+=p;
            m /= 10;
        }
        if(n==s){
            printf("%d\n",n);
        }
    }
    return 0;
}
