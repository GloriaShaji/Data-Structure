#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,r,c,a[30][30],b[30][30],d[30][30];
printf("\nEnter the limit of rows: ");
scanf("%d",&r);
printf("\nEnter the limit of coloumns: ");
scanf("%d",&c);
printf("\nEnter the elements for the first matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the elements for the second matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=0;
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=a[i][j]*b[i][j];
}
}
printf("\nThe resultant matrix multiplication: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf(" %d ",d[i][j]);
}
printf("\n");
}
}
