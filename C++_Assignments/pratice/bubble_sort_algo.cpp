#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;

    int arr[size],i,j;
    cout<<"Enter the elements of an array:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}