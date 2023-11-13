#include<stdio.h>
int main(){
    int m;
    printf("\n Enter the marks = ");
    scanf("%d",&m);
    // if(marks>=0 && marks<=30)
    // printf("FAIL");
    // else if(marks>30 && marks<=100)
    // printf("PASS");
    // else
    // printf("NOt a valid marks ");
    
    // if(m>=0 && m<=100)
    // m>30 ? printf("pass"):printf("fail");
    // else
    // printf("NOt a valid marks ");
    if(m>=30 && m<70)
    printf("PASS Grade:B");
else if(m>=70 && m<90)
printf("PASS Grade:A");
else 
printf("PASS Grade:A+");
 return 0;
}