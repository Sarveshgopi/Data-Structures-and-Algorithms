#include<stdio.h>
#include<stdlib.h>

struct stack
{
   int data;
   struct stack *next;
}*top=NULL;

void push(int x)
{
  struct stack *t;
  t=(struct stack*)malloc(sizeof(struct stack));
  if(t==NULL)
  {
    printf("The Stack is full");
  }
  else
  {
    t->data=x;
    t->next=top;
    top=t;
  }
}

void pop()
{
  if(top==NULL)
  {
    printf("The Stack is empty");
  }
  else
  {
    struct stack *t;
    int x;
    t=top;
    top=top->next;
    x=t->data;
    printf("The element deleted is: %d\n",x);
    free(t);
  }
}

void display()
{
  struct stack *p;
  p=top;
  while(p)
  {
    printf("%d ",p->data);
    p=p->next;
  }
}

int main()
{
   int n;
   scanf("%d",&n);
   int a[n+1],i;
   for(i=0;i<n;i++)
   {
     scanf("%d ",&a[i]);
     push(a[i]);
   }
  display();
  pop();
  pop();
  return 0;
}
    
