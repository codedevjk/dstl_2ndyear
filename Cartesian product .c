#include <stdio.h>

void main()
{
int a[10],b[10],c[10],i,j,n=2,m=2,k;
printf("Enter the elements in set A :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements in set B :\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
printf("Cartesian product =");
printf("{");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("(%d,%d)",a[i],b[j]);
printf(",");
}}
printf("}");

}
