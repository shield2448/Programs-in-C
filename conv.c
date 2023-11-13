#include<stdio.h>
int main(){
    float C,F;
    printf("\n Enter the temp in celcius = ");
    scanf("%f",&C);
    F=((9*C)/5)+32;
    printf("The temp in Fahrenheit = %f",F);
    return 0;
}