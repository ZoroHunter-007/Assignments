#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("D:\\Assignments_tops\\C_assignments\\test.txt","r");
    char  name[20];
    fscanf(fp,"%s",&name);
    printf("%s name is.",name);
}