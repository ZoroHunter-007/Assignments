#include<stdio.h>
int linearSearch(int size,int a[],int target)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==target)
        {
            return i;
        }
    }
return -1;
}

void main(){
    int size,element;
    printf("Enter a size of an array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter a elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter a element you want to search:\n");
    scanf("%d",&element);

    int i=linearSearch(size,a,element);
    if(i>=0)
    {
        printf("Element on %d index",i);
    }
    else
    {
        printf("Element not found");
    }
    
}