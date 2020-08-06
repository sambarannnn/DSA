/*WAP to add two distances (in km-meter) by passing structure to a function.*/

#include <stdio.h>
#include <stdlib.h>

struct Distance
{
   int km;
   float m;
} d1, d2, result;//usage of struct to make variables outside main

void convert (struct Distance * r)
{
    // while metre is greater than 1000, changing it to kilometre.
   while (r->m > 1000.0)
   {
      r->m = r->m - 1000.0;
      r->km++;
   }
}
int main()
{
   printf("Enter 1st distance\n");
   printf("Enter Kilometres: ");
   scanf("%d", &d1.km);
   printf("Enter Metres: ");
   scanf("%f", &d1.m);
   printf("\nEnter 2nd distance\n");
   printf("Enter Kilometres: ");
   scanf("%d", &d2.km);
   printf("Enter Metres: ");
   scanf("%f", &d2.m);

   result.km = d1.km + d2.km;
   result.m = d1.m + d2.m;

   convert(&result);

   printf("\nSum of distances = %dkm %.1fm\n", result.km, result.m);
   return 0;
}