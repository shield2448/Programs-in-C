#include<stdio.h>
int main(){
    int age;
    printf("\n Enter the age = ");
    scanf("%d",&age);
    age>=18?printf("Adult %d  \n",age):printf("Child %d \n",age);
    return 0;
}