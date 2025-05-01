#include<stdio.h>
void main()
{
    int days,ch;
    do
    {
    printf("Enter a number between(1-7):");
    scanf("%d",&days);

    switch(days)
    {
        case 1:
        {
            printf("Monday\n");
             break;
        }
        case 2:
        {
            printf("Tuesday\n");
             break;
        }
        case 3:
        {
            printf("Wednesday\n");
             break;
        }
        case 4:
        {
            printf("Thursday\n");
             break;
        }
        case 5:
        {
            printf("Friday\n");
             break;
        }
        case 6:
        {
            printf("Saturday\n");
             break;
        }
        case 7:
        {
            printf("Sunday\n");
             break;
        }
        default:
                printf("Enter invalid number");
                break;

    }
    printf("Do you want to continue...");
    scanf("%d",&ch);

} while (ch==1);
}