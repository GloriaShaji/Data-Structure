#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[30],item,i,s,e,n,mid;
printf("\n BINARY SEARCH!\n ");
printf("\n Enter the limit: ");
scanf("%d",&n);
printf("\n Enter the elements in a non-decreasing order: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the item: ");
scanf("%d",&item);
s=0;
e=n-1;
while(s<=e)
{
mid=(s+e)/2;
if(a[mid]==item)
{
printf("\n %d is found at the %d position! \n",item,mid+1);
break;
}
else if(a[mid]<item)
{
s=mid+1;
}
else
{
e=mid-1;
}
}
if(s>e)
{
printf("\n Item not found!!! \n");
}
return 0;
}
