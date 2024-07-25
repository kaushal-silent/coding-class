//write a program to read a number and check whether the number is lead number or not
#include<stdio.h>
int main()
{
  int a,b,c=0,i=1,d,e;
  printf("Enter a positive number: ");
  scanf("%d",&a);
  while(a!=0){
    if(i%2==0){
      b=a%10;
      c=c+b;
      a=a/10;
      i++;
    }
    else{
      d=a%10;
      e=e+d;
      a=a/10;
      i++;
    }
  }
  if(c==e){
    printf("The number is lead number");
  }
  else{
    printf("The number is not lead number");
  }
  
}
