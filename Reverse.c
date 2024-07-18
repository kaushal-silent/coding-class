//write a c program to read a number in reverse

#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a positive integer :");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    printf("%d",c);
    return(0);

}
