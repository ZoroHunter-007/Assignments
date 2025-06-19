#include<iostream>
using namespace std;
int main()
{
    int marks;
    

    cout<<"Enter marks:";
    cin>>marks;

    if(marks<0 || marks>100)
    {
        cout<<"Invalid marks enter";
    }
  else if(marks>=90 && marks<=100)
    {
        cout<<"Distinction class";
    }

    else if (marks>=80 && marks<90)
    {
        cout<<"First class";
    }

     else if (marks>=70 && marks<80)
    {
        cout<<"Second class";
    }

     else if (marks>=60 && marks<70)
    {
        cout<<"Third class";
    }
     else if (marks>=50 && marks<60)
    {
        cout<<"Pass class";
    }
    else
    {
        cout<<"Fail";
    }

}