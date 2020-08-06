/*Input and display details of a student using structure.
*/
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int rno;

};

int main()
{
    int n;
    struct student *s;
    printf("Enter Number of students : ");
    scanf("%d", &n);
    s = (struct student*)malloc(n * sizeof(struct student));


    printf("\n\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Details of Student %d : \n", i+1);
        printf("Enter Name : ");
        scanf("%s", s[i].name); //no need of & as e[i].name is a character array. arrays dont need &
        printf("Enter roll number : ");
        scanf("%d", &s[i].rno);
        printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("Details of Student %d : \n", i+1);
        printf("Name : %s\n", s[i].name);
        printf("Roll Number : %d\n", s[i].rno);
        printf("\n\n");
    }
}