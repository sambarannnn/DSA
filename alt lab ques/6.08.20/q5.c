/*Input the details (emp_no, name & salary) of n
no of  employees and display in tabular format and
at the end display
the name of the employee having heights salary.
*/
#include <stdio.h>
#include <stdlib.h>

struct address
{
    char city[10];
    int pin;
};

struct employee
{
    char name[10];
    int no;
    int sal;
    struct address add;
};

int main()
{
    int n;
    struct employee *e;
    printf("Enter Number of employees : ");
    scanf("%d", &n);
    e = (struct employee*)malloc(n * sizeof(struct employee));


    printf("\n\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Details of Employee %d : \n", i+1);
        printf("Enter Name : ");
        scanf("%s", e[i].name); //no need of & as e[i].name is a character array. arrays dont need &
        printf("Enter employee number : ");
        scanf("%d", &e[i].no);
        printf("Enter Salary : ");
        scanf("%d", &e[i].sal);
        printf("Enter city : ");
        scanf("%s", e[i].add.city);
        printf("Enter pincode : ");
        scanf("%d", &e[i].add.pin);
        printf("\n");

    }
    int max = e[0].sal;
    for(int i = 0 ; i < n ; i++)
    {
        if(max<e[i].sal)
        max = e[i].sal;
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("Details of Employee %d : \n", i+1);
        printf("Name : %s\n", e[i].name);
        printf("Employee Number : %d\n", e[i].no);
        printf("Salary : %d\n", e[i].sal);
        printf("City : %s\n", e[i].add.city);
        printf("Pincode : %d\n", e[i].add.pin);
        printf("\n\n");
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(max == e[i].sal)
        printf("Employee with highest salary : %s\n", e[i].name);
    }

}
