//write a c program to add the digits in the given number

#include<stdio.h>
int main()
{
  int a,b,c=0;
  printf("Enter a positive integer : ");
  scanf("%d",&a);
  while(a!=0){
    b=a%10;
    c=c+b;
    a/=10;
  }
  printf("%d/n",c);
  return(0);
}
