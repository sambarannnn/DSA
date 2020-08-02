/*Q)Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance between x and y in arr.
The array might also contain duplicates. You may assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.*/

#include <stdio.h>
#include <stdlib.h>

int mindist(int *arr, int n, int x, int y)
{
    int d = 100;

    for(int i = 0 ; i < n ; i++)
    {
        if(x == *(arr + i))
        {
            for(int j = i ; j < n ; j++)
            {
                if(y == *(arr + j) && d > (j - i))
                {
                    d = j - i ;
                }
            }
        }
    }
    return d;
}
int main()
{
    int *arr;
    int n, x, y, z;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));

    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter element no %d :", i+1);
        scanf("%d", arr + i);
    }
    printf("Enter x & y : ");
    scanf("%d%d", &x,&y);

    z = mindist(arr, n, x, y) ;
    printf("The minimum distance between %d & %d : %d\n", x, y, z);
}