#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
int push (void)
{
  int x;
  if (top==N-1)
  {
    printf("Overflow condition");
  }
  else 
  {
    top++;
    printf("Enter the number to be insterted");
    scanf("%d",&x);
    stack[top]=x;
  }
}
int pop(void)
{ 
  int item;
  if (top==-1)
  {
    printf("Underflow condition");
  }
  else 
  {
    item=stack[top];
    top--;
    printf("Deleted item is : %d", item);

  }
}
int peek (void)
{
  if (top==-1)
  {
    printf("Underflow Condition");
  }
  else 
  {
    printf("%d",&stack[top]);
  }
}
int display (void)
{
  int i =0;
  for(i=top;i>=0;i++)
  {
    printf("%d",stack[i]);
  }
}
int main ()
{
  push();
  pop();
  peek();
  display();
  return 0;
}
