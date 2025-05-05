#include<stdio.h>
struct Student
{
    /* data */
    int rno,marks;
    char name[20];
}s1[3];

void main()
{
    for(int i=0;i<3;i++)
    {
        printf("\nEnter a Roll No:");
        scanf("%d",&s1[i].rno);
        printf("\nEnter a Name:");
        scanf("%s",&s1[i].name);
        printf("\nEnter a Marks:");
        scanf("%d",&s1[i].marks);
    }

    for(int i=0;i<3;i++)
    {
        printf("\n%d\n%s\n%d\n",s1[i].rno,s1[i].name,s1[i].marks);
    }
}
