// Read n no. of values into an array and display them in reverse order.
#include <stdio.h>

int main()
{
   int i,n,a[100];


   printf("number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
      printf("element - %d : ",i);
      scanf("%d",&a[i]);
      }

   printf("\nvalues oF the array are : \n");
   for(i=0;i<n;i++)
     {
       printf("% 5d",a[i]);
     }

   printf("\n values of array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
       printf("% 5d",a[i]);
      }
   printf("\n\n");
}
