#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int queue[MAX],front= -1,rear= -1,count= 0;

void enqueue()
{
int elem;
if(count==MAX)
{
printf("\n Circular Queue is Full!!");
return;
}
printf("\nEnter the element to be enqueued: ");
scanf("%d",&elem);
if(front==-1)
{
front=0;
}
rear = (rear + 1) % MAX;
queue[rear] = elem; 
count++;
printf("\n\t %d enqueued to the Circular Queue\n", elem);
}

void dequeue()
{
if(count==0)
{
printf("\n\t The Circular Queue is empty!!! \n");
return;
}
else
{
printf("\n\t %d dequeued!!!\n",queue[front]);
front=(front+1)%MAX;
count--;
}
}

void display()
{
if(count==0)
{
printf("\n\t The Circular Queue is empty!!!\n");
return;
}
else
{
int j=front;
printf("\n\tThe Circular Queue elements are: \n");
for(int i=0; i<count; i++)
{
printf("\n\t%d\n",queue[j]);
j=(j+1)%MAX;
}
}
}

int main()
{
int ch;
while(1)
{
printf("\n CIRCULAR QUEUE MENU");
printf("\n 1.ENQUEUE ");
printf("\n 2.DEQUEUE");
printf("\n 3.DISPLAY");
printf("\n 4.EXIT");
printf("\n Enter your choice: ");
scanf("%d",&ch);

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
printf("Invalid choice");
}
}
return 0;
}
