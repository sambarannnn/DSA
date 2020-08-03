/*Design array based data structure to represent
- Diagonal matrix
- Lower Triangular matrix
- Upper Triangular matrix
- Tri-diagonal matrix
- Toeplitz matrix
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A;//1D aray to store
    int n;//dimension
    int choice;
    int size = 0;//will determine size of 1D array to store elements
    int x;
    printf("1 : Diagonal Matrix\n2 : Lower Triangular Matrix\n");
    printf("3 : for Upper Triangular Matrix\n4 : Tri-diagonal Matrix\n");
    printf("5 : Toeplitz Matrix\n6 : Symmetric Matrix\n");
    printf("Enter Choice : ");
    scanf("%d", &choice);
    printf("Enter Dimensions : ");
    scanf("%d",& n);

    switch(choice)
    {
        case 1 :
        size = n;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if(i == j)
                {
                    A[i - 1] = x ;
                }
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i == j)
                {
                    printf("%d ", A[i - 1]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
        break;

        case 2 :
        size = n*(n + 1) / 2;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if(i >= j)
                {
                    //ROW MAJOR FORMULA can replace i and j in upper triag's RM to get CM here
                    A[i*(i-1)/2 + (j-1)] = x ;//ROW MAJOR FORMULA
                }
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i >= j)
                {
                    printf("%d ", A[i*(i-1)/2 + (j-1)]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
        break;

        case 3 :
        size = n * (n + 1) / 2;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if(i <= j)
                {
                    //ROW MAJOR FORMULA can replace i and j in lower triag's rm to get col major here
                    A[(n*(i-1) - (i-1)*(i-2)/2) + (j-i)] = x ;
                }
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i <= j)
                {
                    printf("%d ", A[(n*(i-1) - (i-1)*(i-2)/2) + (j-i)]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
        break;

        case 4 :
        size = (3 * n) - 2;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if((i - j) == 1)
                    A[i-2] = x;
                else if((i - j) == 0)
                    A[n - 1 + i - 1] = x;
                else if((i - j) == -1)
                    A[(2*n) - 1 + i - 1] = x;
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if((i - j) == 1)
                    printf("%d ", A[i - 2]);
                else if((i - j) == 0)
                    printf("%d ", A[n - 1 + i - 1]);
                else if((i - j) == -1)
                    printf("%d ", A[(2*n) - 1 + i - 1]);
                else
                    printf("0 ");
            }
            printf("\n");
        }
        break;

        case 5 :
        size = (2 * n) - 1;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if(i <= j)
                    A[j - i] = x;
                else if(j < i)
                    A[n + i - j - 1] = x;
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i <= j)
                    printf("%d ", A[j - i]);
                else if(j < i)
                    printf("%d ", A[n + i - j - 1]);
            }
            printf("\n");
        }
        break;

        case 6 :
        size = n*(n + 1) / 2;
        A = (int*)malloc(size * sizeof(int));
        printf("\nEnter elements : \n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                scanf("%d", &x);
                if(i >= j)
                {
                    //ROW MAJOR FORMULA can replace i and j in upper triag's RM to get CM here
                    A[i*(i-1)/2 + (j-1)] = x ;//ROW MAJOR FORMULA
                }
            }
        }
        printf("\n1D array storing the elements : ");
        for(int i = 0 ; i < size ; i++)
        {
            printf("%d ", A[i]);
        }
        int temp1,temp2;
        printf("\n\nDisplaying matrix from stored 1D array values :\n");
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(i >= j)
                {
                    printf("%d ", A[i*(i-1)/2 + (j-1)]);
                }
                else
                {
                    temp1 = i;
                    temp2 = j;
                    printf("%d ", A[temp2*(temp2-1)/2 + (temp1-1)]);
                }
            }
            printf("\n");
        }
        break;
    }
}