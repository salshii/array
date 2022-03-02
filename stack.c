#include<stdio.h>
#define MAXSIZE 5
struct stack
{
int stk[MAXSIZE];
int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void display(void);
void main()
{
int choice;
int option= 1;
s.top=-1;
printf("STACK OPERATION\n");
while(option)
{
printf("\n-----------------------------------------------------\n");
printf("\n       1     -->  PUSH             \n");
printf("\n       2     -->  POP              \n");
printf("\n       3     -->  DISPLAY          \n");
printf(" \n      4     -->  EXIT             \n");
printf("\n-----------------------------------------------------\n");
printf("Enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
     push();
     break;
case 2:
     pop();
     break;
case 3:
     display();
     break;
case 4:
     return;
}
fflush (stdin);
printf("do you want to continue(0 or 1)?\n");
scanf("%d",&option);
}
}
void push()
{
int num;
if(s.top ==(MAXSIZE -1))
{
printf("stack is full\n");
return;
}
else
{
printf("enter the element to be pushed\n");
scanf("%d",&num);
s.top =s.top + 1;
s.stk[s.top]=num;
}
return;
}
int pop()
{
int num;
if(s.top==-1)
{
printf("Stack is empty\n");
return(s.top);
}
else
{
num=s.stk[s.top];
printf("poped elements is =%d\n",s.stk[s.top]);
s.top=s.top-1;
}
return(num);
}
void display()
{
int i;
if(s.top==-1)
{
printf("stack is empty\n");
return;
}
else
{
printf("\n The status of stack is \n");
for(i=s.top;i>=0;i--)
{
printf("%d\n",s.stk[i]);
}
}
printf("\n");
}


