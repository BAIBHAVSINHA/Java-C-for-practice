#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks[5];
}s[4];
int main()
{
    int i,j;
    printf("enter details of student\n");
    for(i=0; i<4;i++)
    {
        printf("Enter name: ");
        getchar();
        gets(s[i].name);
        printf("Enter roll number: ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks: ");
        scanf("%.1f",&s[i].marks);
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<4;i++)
    {
        printf("Name: ");
        puts(s[i].name);
        printf("Roll number: %d\n",s[i].rollno);
        printf("Marks: %.1f\n", s[i].marks);
    }
    return 0;
}
