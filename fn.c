#include<stdio.h>
void printHello(); //function declaration
void printHello()
    {printf("Hello\n");} //function definition
int main(){
    for(int i=1;i<=5;i++)
    printHello(); //function call
    return 0;
}