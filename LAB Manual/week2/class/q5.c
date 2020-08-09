
/*
WAP to print mth node from the last of a linked list of n nodes.
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*first;

void create(int A[], int n)
{
    struct node *t, *last;
    int i;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(i = 1 ; i < n ; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

struct node* find_node(struct node *p, int index)
{
    for(int i = 0 ; i < index - 1 ; i++)
        p = p->next;
    return p;
}
int main()
{
    int n, index;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &A[i]);
    }
    create(A, n);
    printf("Enter value of m (index) : ");
    scanf("%d", &index);
    
    struct node *p = find_node(first, index);
    printf("Data at mth node : %d\n", p->data);
}


