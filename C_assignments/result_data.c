#include<stdio.h>
void main()
{
    int rno,m1,m2,m3,m4,m5,tot;
    float per;

    printf("Enter a Roll no:");
    scanf("%d",&rno);
    printf("\nEnter Marks 1:");
    scanf("%d",&m1);
    printf("\nEnter Marks 2:");
    scanf("%d",&m2);
    printf("\nEnter Marks 3:");
    scanf("%d",&m3);
    printf("\nEnter Marks 4:");
    scanf("%d",&m4);
    printf("\nEnter Marks 5:");
    scanf("%d",&m5);
   
    tot=m1+m2+m3+m4+m5;
    printf("Your Total is:%d\n",tot);

    per=tot/5.0;

    if(per>75)
    {
        printf("Distinction\n");
    }
    else if (per>60 && per<=75)
    {
        printf("First Class\n");
    }
    else if (per>50 && per<=60)
    {
        printf("Second Class\n");
    }
    else if(per>35 && per<=50)
    {
        printf("Pass Class\n");
    }
    else{
        printf("Fail\n");
    }

    printf("**********************************Result Data******************************");
    printf("\n---------------------------------------------------------------------------");
    printf("\nRoll no:%d",rno);
    printf("\nMarks 1:%d",m1);
    printf("\nMarks 2:%d",m2);
    printf("\nMarks 3:%d",m3);
    printf("\nMarks 4:%d",m4);
    printf("\nMarks 5:%d",m5);
    printf("\nTotal is:%d",tot);
    printf("\nPercentage:%f",per);
}