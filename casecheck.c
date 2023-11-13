#include<stdio.h>
int main(){
    char ch;
    printf("Enter the letter = ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='z')
    {
    if(ch>='a'&& ch<='z') // ch>=97 & ch<='a'
     printf("The letter is in Lower Case");
     else 
      printf("The letter is in Upper Case");
    }
    else
     printf("input is not a letter");
    return 0;
}
