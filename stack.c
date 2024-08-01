#include<stdio.h>
#define size 10
void Push();
int Pop();
void Display();
int top=-1;
int main()
{
  int stack[size],choice,data,del;
  printf("Enter 1 for push\n , 2 for pop\n , 3 for display\n ");
  scanf("%d",&choice);
   switch(choice){
     case1: printf("Enter the data you want to add in the stack");
            scanf("%d",&data);
            Push();
            break;
     case2: del=Pop();
            printf("the deleted value is %d",del);
            break;
     case3: Display();
            break;
     default: printf("Enter correct value 1 for push\n , 2 for pop\n , 3 for display\n");
   }
return 0;  
}
void Push(int data){
  if(top==(size-1))
    printf("The stack is full delete at first");
  else
    top++;
    stack[top]=data;
}
int Pop(){
  if(top==-1)
    printf("The stack is empty nothing to insert at first");
  else
    data=stack[top];
    top--;
  return data;
  
}
void Display(){
  
}
