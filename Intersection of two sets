#include<stdio.h>

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
 int main()
 {
   int i,k,n1,n2,j=0;;
   printf("Enter size of an SET 1 \n");
   scanf("%d",&n1);
   printf("Enter size of an SET 2 \n");
   scanf("%d",&n2);
  
   int a[n1],b[n2],ints[n1];
   printf("\nEnter numbers for SET 1 \n");
   for(i=0;i<n1;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\nEnter numbers for SET 2 \n");
   for(i=0;i<n2;i++)
   {
      scanf("%d",&b[i]);
   }
   for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       {
           if(a[i]==b[j])
           {
               ints[k]=a[i];
               k++;
           }
       }
   }
   sort((k),ints);
   printf("Array after Intersection \n");
   for(i=0;i<k;i++)
   {
       printf( "%d\n",ints[i]);
   }
   
}
