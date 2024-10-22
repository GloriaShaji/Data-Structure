#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int stack[50],top=-1;

void push()
{
int item;

if(top==MAX-1)
{
printf("\n Stack Overflow!Elements cannot push into the stack! \n");
return;
}
else
{
printf("\n Enter the element to be pushed: ");
scanf("%d",&item);
top++;
stack[top]=item;
printf("\n\t %d pushed into the Stack!\n",item);
}
}

void pop()
{
if(top==-1)
{
printf("\n Stack underflow!Elements cannot popped out of the Stack! \n");
return;
}
else
{
printf("\n %d is popped out of the stack!\n",stack[top]);
top--;
}
}

void display()
{
int i;
if(top==-1)
{
printf("\n Stack is empty");
return;
}
else
{
printf("\n The elements are: ");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
}

int main()
{
int ch;
while(1)
{
printf("\n STACK MENU");
printf("\n 1.PUSH");
printf("\n 2.POP");
printf("\n 3.DISPLAY");
printf("\n 4.EXIT");
printf("\n Enter your choice: ");
scanf("%d",&ch);

switch(ch)
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
exit(0);

default:
printf("\n Invalid Choice");
}
}
return 0;
}


