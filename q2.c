
#include <stdio.h>

int main()
{
    int i,n,a[100] ;


   printf("number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
      printf("element - %d : ",i);
      scanf("%d",&a[i]);
    
      }
    int sum = 0;
    for(i=0; i<n; i++)
        {

            sum+=a[i];
        }
         printf("sum of array is : %d",sum);


}
