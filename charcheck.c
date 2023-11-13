#include<stdio.h>
int main(){
    char c;
    printf("\n Enter the character = ");
    scanf("%c",&c);
    if (c>='0' && c<='9')
    printf("The character is a digit = %c",c);
    else
    printf("Not a digit %c",c);
    return 0;
}