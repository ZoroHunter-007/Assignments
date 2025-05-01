#include<stdio.h>
void main()
{
    int size,ch,choice;
    printf("\nEnter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the element of an array:");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
    printf("\nEnter your choice for array sorting(ascending/descending):");
    scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                    for(int i=0;i<size;i++)
                    {
                        for(int j=i+1;j<size;j++)
                        {
                            if(arr[i]>arr[j])
                            {
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    for(int i=0;i<size;i++)
                    {
                       printf("%d\n",arr[i]);
                    }
            break;

            case 2:
                   for(int i=0;i<size-1;i++)
                   {
                    for(int j=i+1;j<size;j++)
                    {
                        if(arr[i]<arr[j])
                        {
                            int temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                   }
                   for(int i=0;i<size;i++)
                   {
                    printf("%d\n",arr[i]);
                   }
                    break;

        }
        printf("\nDo you want to continue....");
        scanf("%d",&choice);
    } while(choice==1);
}