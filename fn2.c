#include<stdio.h>
int calculateprice(float value);
int main(){
 float value=100.0; 
 calculateprice(value);
 return 0;
}
int calculateprice(float value){
  value=value+(0.18*value);
  printf("Final Price: %f\n",value);
  return 0;
}