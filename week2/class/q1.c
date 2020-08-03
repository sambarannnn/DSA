/*WAP to store n employee’s data such as employee name, gender, designation, department, basic pay.
Calculate the gross pay of each employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[10];
    char gender;
    char designation[10];
    char department[10];
    int basicpay;
};

int grosspay(int bp)
{
    int gp = bp + (0.25 * bp) + (0.75 * bp) ;
    return gp;
}

int main()
{
    int n;
    struct employee *e;
    printf("Enter Number of employees : ");
    scanf("%d", &n);
    e = (struct employee*)malloc(n * sizeof(struct employee));

    int *grpy;
    grpy = (int*)malloc(n * sizeof(int));

    printf("\n\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Details of Employee %d : \n", i+1);
        printf("Enter Name : ");
        scanf("%s", e[i].name); //no need of & as e[i].name is a character array. arrays dont need &
        printf("Enter Gender(M/F) : ");
        scanf(" %c", &e[i].gender); //put a space behind %c to ensure that it doesnt take previous newline as input
        printf("Enter Designation : ");
        scanf("%s", e[i].designation);
        printf("Enter Department : ");
        scanf("%s", e[i].department);
        printf("Enter Basic Pay : ");
        scanf("%d", &e[i].basicpay);
        grpy[i] = grosspay(e[i].basicpay);
        printf("\n\n");
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("Details of Employee %d : \n", i+1);
        printf("Name : %s\n", e[i].name);
        printf("Gender : %c\n", e[i].gender);
        printf("Designation : %s\n", e[i].designation);
        printf("Department : %s\n", e[i].department);
        printf("Basic Pay : %d\n", e[i].basicpay);
        printf("Gross Pay : %d\n", grpy[i]);
        printf("\n\n");
    }
}
