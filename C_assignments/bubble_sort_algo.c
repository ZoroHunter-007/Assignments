#include<stdio.h>
void main(){
    int size,i,j;
    printf("Enter a size of an array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter a element of an array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    //sorting an array using bubble sort algo
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    //print the sort array
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
   
}
