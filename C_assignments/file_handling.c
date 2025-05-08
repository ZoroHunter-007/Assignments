#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("D:\\Assignments_tops\\C_assignments\\test.txt","w");
    //add content
    char name[20];
    printf("Enter a name:");
    scanf("%s",&name);
    fprintf(fp,"%s",name);
}