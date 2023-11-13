#include <stdio.h>
int main() {
    int x,l,u;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d",&u);
    if (l<0 || u<0) {
        printf("Invalid range");
    }
    else{
    if (l>u) {
       x=l;
       l=u;
       u=x; 
    }
    printf("Armstrong numbers in this range:\n");
 for (int n=l;n<=u;n++) {
        int m,c=0,s=0;
        m=n;
       for(;m>0;m/=10){
            ++c;
        }
        m=n;
        for(;m>0;){
            int r=m%10;
            int p=1;
            for(int i=0;i<c;i++)
                p*=r;
            s+=p;
            m/=10;
        }
        if (s==n) {
            printf("%d\n",n);
        }
 }
 }
    return 0;
}
