#include<stdio.h>
void main()
{
    int a,b,choice;
    char ch;
    do{

    
    printf("\nEnter a value of A and B:");
    scanf("%d %d",&a,&b);
    printf("\nEnter your choice(+,-,*,/,%%):");
    scanf(" %c",&ch);

    switch (ch)
    {
        case '+':
                printf("Addition:%d",a+b);
                break;

        case '-':
                printf("Subtraction:%d",a-b);
                break;

        case '*':
                printf("Multiplication:%d",a*b);
                break;

        case '/':
               if(b!=0)
               {
                printf("Division:",a/b);
               }
               else{
                printf("You can't divided by zero");
               }
               break;

        case '%':
                if(b!=0)
               {
                printf("Modulo:",a%b);
               }
               else{
                printf("You can't divided by zero");
               }
               break;
        default:
                printf("You entered invaild operator...!");
                break;
    }
    printf("\nDo you want to continue....");
    scanf("%d",&choice);
}while(choice==1);
}