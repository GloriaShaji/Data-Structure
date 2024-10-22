#include<stdio.h>
int main()
{
int a[30],i,n,item,flag=-1;
printf("\n Enter the limit: ");
scanf("%d",&n);
printf("\n Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the item: ");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("\n %d is found at the %dth position \n",item,i+1);
flag=1;
break;
}
}
if(flag==-1)
{
printf("\nItem not found!\n");
}
return 0;
}
