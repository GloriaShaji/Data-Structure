#include<stdio.h>
#include<stdlib.h>

int a[30],n,i,loc,item,flag=-1;



void insert()
{
int item,loc;
printf("\nEnter the element to be inserted: ");
scanf("%d",&item);
printf("\nEnter the location: ");
scanf("%d",&loc);
if(loc<0||loc>n)
{
printf("\n You cannot insert any element");
}
else
{
for(i=n;i>=loc;i--)
{
a[i+1]=a[i];
}
a[loc]=item;
n++;
printf("\n %d is inserted in %dth position \n",item,loc);
}
}

void delete()
{
int loc;
printf("\n Enter the location the element to be deleted: ");
scanf("%d",&loc);
if(n==0)
{
printf("Array is empty");
}
else 
{
if(loc<0||loc>n)
{
printf("You cannot delete this element");
}
else
{
for(i=loc;i<=n;i++)
{
a[i]=a[i+1];
}
n--;
printf("\n deletion is done! \n");
}
}
}

void search()
{
int item,flag=-1;
printf("\n Enter the element: ");
scanf("%d",&item);
if(n==0)
{
printf("Array is empty");
}
else
{
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("\n %d found at %d \n",item,i);
flag=1;break;
}
}
if(a[i]!=item)
printf("%d is not found",item);
flag=-1;return;
}
}


void display()
{
if(n==0)
{
printf("Array is empty");
}
else
{
for(i=0;i<n;i++)
{
printf("\n\t%d\n",a[i]);
}
}
}

int main()
{
int ch;
while(1)
{

printf("\n ARRAY MENU \n");
printf("\n 1. INSERTION");
printf("\n 2. DELETION");
printf("\n 3. SEARCH");
printf("\n 4. DISPLAY");
printf("\n 5. EXIT");
printf("\n Enter your choice: ");
scanf("\n%d",&ch);

switch(ch)
{
case 1:
insert();
break;

case 2:
delete();
break;

case 3:
search();
break;

case 4:
display();
break;

case 5:
exit(0);

default:
printf("invalid choice");
}
}
return 0;
}

