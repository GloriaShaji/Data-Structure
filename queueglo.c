#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int queue[MAX],front=-1,rear=-1;

void enqueue()
{
int elem;
if(rear==MAX-1)
{
printf("Queue is overflow!You cannot enqueue the element!");
return;
}
else
{
printf("Enter the element to be enqueued: ");
scanf("%d",&elem);
if(front==-1)
{
front=0;
}
rear++;
queue[rear]=elem;
printf("\n\t%d is enqueued into the QUEUE!",elem);
}
}

void dequeue()
{
if(front==-1||front>rear)
{
printf("Queue is empty!Elements cannot be dequeued!");
return;
}
else
{
printf("\n\t%d dequeued!",queue[front]);
front++;
}
if(front>rear)
{
front=rear=-1;
}
}

void display()
{
int i;
if(front==-1)
{
printf("Queue is empty!");
return;
}
else
{
printf("\n Queue elements are: ");
for(i=front; i<=rear; i++)
{
printf("\n%d",queue[i]);
}
}
}

int main()
{
int ch;
while(1)
{
printf("\n Queue Menu");
printf("\n 1.ENQUEUE OPERATION");
printf("\n 2.DEQUEUE OPERATION");
printf("\n 3.DISPLAY");
printf("\n 4.EXIT");
printf("\nEnter your choice: ");
scanf("\n%d",&ch);

switch(ch)
{
case 1:
enqueue();
break;

case 2:
dequeue();
break;

case 3:
display();
break;

case 4:
exit(0);

default:
printf("Invalid choice!");
}
}
return 0;
}
