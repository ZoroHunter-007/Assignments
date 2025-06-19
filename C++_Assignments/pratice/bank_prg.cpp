#include<iostream>
using namespace std;

int main()
{
    int balance,withdraw,deposite,count=0,choice;
    int arr[5];
    string name;

    cout<<"Enter your name:"<<endl;
    cin>>name;

    do
    {
        cout<<endl;
        cout<<"1] Enter Bank Balance"<<endl;
        cout<<"2] Enter Withdraw amount"<<endl;
        cout<<"3] Enter Deposite amount"<<endl;
        cout<<"4] Show total Balance"<<endl;
        cout<<"5] Exit"<<endl;

        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(count<10)
                {
                    cout<<"Enter Balance:"<<endl;
                    cin>>balance;
                    arr[count]=balance;
                    count++;
                    cout<<"Value inserted"<<endl;
                    
                }
                else{
                    cout<<"Array is full"<<endl;
                }
                break;

            case 2:
                cout<<"Enter Withdraw amount:"<<endl;
                cin>>withdraw;
                balance=balance - withdraw;
                break;

            case 3:
                cout<<"Enter Deposite amount:"<<endl;
                cin>>deposite;
                balance=balance + deposite;
                break;

            case 4:
                for(int i=0;i<count;i++)
                {
                    cout<<"Your name:"<<name<<endl;
                    cout<<"Total Balance:"<<balance<<endl;
                }
                break;

            case 5:
                exit(0);
                break;

            default:
                cout<<"You Entered the wrong choice...!"<<endl;
                break;
        }
    } while (choice!=6);
    

}