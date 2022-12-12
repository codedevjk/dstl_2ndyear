#include <stdio.h>

void sort(int,int[]);
int removerepeat(int,int[]);

int main()
{
   int size,i,n1,n2,j=0;;
   printf("Enter size of an array 1\n");
   scanf("%d",&n1);
   printf("Enter size of an array 2\n");
   scanf("%d",&n2);
  
   int a[n1],b[n2],uni[n1+n2];
   printf("Enter numbers for array 1\n");
   for(i=0;i<n1;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter numbers for array 2\n");
   for(i=0;i<n2;i++)
   {
      scanf("%d",&b[i]);
   }
  
   for(i=0;i<n1;i++)
   {
      uni[j]=a[i];
      j++;
    }
   for(i=0;i<n2;i++)
   {
      uni[j]=b[i];
      j++;
   }
     sort((n1+n2),uni);
   size=removerepeat(n1+n2,uni);
   printf("Array after Union \n");
   for(i=0;i<size;i++)
   {
      printf("%d\n",uni[i]);
   }
   
}
  int removerepeat(int size,int a[])
  {
   int i,j,k;
   for(i=0;i<size;i++)
   {
      for(j=i+1;j<size;)
      {
         if(a[i]==a[j])
         {
            for(k=j;k<size;k++)
            {
               a[k]=a[k+1];
            }
            size--;
         }
         else
         {
            j++;
         }
      }
   }
    return(size);
  }
   void sort(int size,int a[])
   {
       int i,j,temp;
       for(i=0;i<size;i++)
       {
        for(j=i+1;j<size;j++)
        {
         if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           } 
        }
       }
   }
