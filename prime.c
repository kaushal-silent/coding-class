//write a c program to check whether a number is prime or not

#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a positive integer : ");
  scanf("%d",&a);
  if(a<=1){
    printf("The number is not a prime number");
  }
  else{
    b=a%2;
    if(b==0){
      printf("The number is not a prime number");
      }
    else{
      printf("The number is a prime number");
    }
  }
  
}
