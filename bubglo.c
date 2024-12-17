#include<stdio.h>
void bubble_sort(int a[],int n)
{
int i,j,temp,swapped;
for(i=0;i<n;i++)
{
swapped=0;
for(j=0;j<n-1;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swapped=1;
}
}
if(!swapped)
{
break;
}
}
}
void print_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
int main()
{
int a[10],i,n;
printf("\n Programme for bubble sort:");
printf("\n Enter the array size:");
scanf("%d",&n);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubble_sort(a,n);
printf("\n Sorted Array:");
print_array(a,n);
return 0;
}
