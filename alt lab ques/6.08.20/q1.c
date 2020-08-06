/*Define a function simpleinterest() with 3 parameters,
principle, time and rate of interest which will return
the simple interest in the form of double.
Test it using a main function.
*/
#include <stdio.h>
double sinterest(int p, int r, int t)
{
 double s = (p * r * t)/ 100.0;
 return s;
}
int main()
{
 float p, r;
 double s;
 int t;

 printf("Enter Principle Amount, Rate %% per Annum and Time\n");
 scanf ("%f %f %d", &p, &r, &t);

 s = sinterest(p, r, t);

 printf ("Principle Amount = %.2f\n", p);
 printf ("Rate %% per Annum   = %.2f%% \n", r);
 printf ("Time   = %d years\n", t);
 printf ("Simple Interest  = %.2f\n", s);
}