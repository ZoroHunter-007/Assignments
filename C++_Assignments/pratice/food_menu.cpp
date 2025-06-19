#include<iostream>
using namespace std;

int main()
{
    int qty,amount,tot,choice,ch;
    string name,item;

    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<endl;

    cout<<"What would you like to order?"<<endl;
    do{
        cout<<endl;
        cout<<"1] Pizzas"<<endl;
        cout<<"2] Burger"<<endl;
        cout<<"3] Sandwich"<<endl;
        cout<<"4] Rolls"<<endl;
        cout<<"5] Biryani"<<endl;
        cout<<"6] Exit"<<endl;

        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"1] Margerita Pizza Rs.120"<<endl;
                cout<<"2] Double Cheese Pizza Rs.150"<<endl;
                cout<<"3] Corn Cheese Pizza Rs.130"<<endl;
                cout<<"Enter which Pizza you want to order?:"<<endl;
                cin>>ch;

                cout<<"Enter the Quntity:"<<endl;
                cin>>qty;

                switch(ch)
                {
                    case 1:
                        item="Margerita Pizza";
                        amount=120;
                        break;

                    case 2:
                        item=" Double Cheese Pizza";
                        amount=150;
                        break;

                    case 3:
                        item="Corn Cheese Pizza";
                        amount=140;
                        break;

                    default:
                        cout<<"Invalid order..!";
                        break;
                }
                break;

            case 2:
                cout<<"1] Veg. Burger Rs.60"<<endl;
                cout<<"2] Veg. Cheese Burger Rs.80"<<endl;
                cout<<"3] Double Cheese Burger Rs.100"<<endl;
                cout<<"Enter which Burger you want to order?:"<<endl;
                cin>>ch;

                cout<<"Enter the Quntity:"<<endl;
                cin>>qty;

                switch(ch)
                {
                    case 1:
                        item="Veg. Burger";
                        amount=60;
                        break;

                    case 2:
                        item=" Veg. Cheese Burger";
                        amount=80;
                        break;

                    case 3:
                        item="Double Cheese Burger";
                        amount=100;
                        break;

                    default:
                        cout<<"Invalid order..!";
                        break;
                }
                break;
            case 3:
                cout<<"1] Veg. Sandwich Rs.80"<<endl;
                cout<<"2] Veg. Cheese Sandwich Rs.120"<<endl;
                cout<<"3] Double Cheese Sandwich Rs.140"<<endl;
                cout<<"Enter which Burger you want to order?:"<<endl;
                cin>>ch;

                cout<<"Enter the Quntity:"<<endl;
                cin>>qty;

                switch(ch)
                {
                    case 1:
                        item="Veg. Sandwich";
                        amount=80;
                        break;

                    case 2:
                        item=" Veg. Cheese Sandwich";
                        amount=120;
                        break;

                    case 3:
                        item="Double Cheese Sandwich";
                        amount=140;
                        break;

                    default:
                        cout<<"Invalid order..!";
                        break;
                }
                break;

            
            case 4:
                cout<<"1] Veg. Roll Rs.80"<<endl;
                cout<<"2] Veg. Cheese Roll Rs.120"<<endl;
                cout<<"3] Double Cheese Paneer Roll Rs.140"<<endl;
                cout<<"Enter which Sandwich you want to order?:"<<endl;
                cin>>ch;

                cout<<"Enter the Quntity:"<<endl;
                cin>>qty;

                switch(ch)
                {
                    case 1:
                        item="Veg. Roll";
                        amount=80;
                        break;

                    case 2:
                        item=" Veg. Cheese Roll";
                        amount=120;
                        break;

                    case 3:
                        item="Double Cheese Paneer Roll";
                        amount=140;
                        break;

                    default:
                        cout<<"Invalid order..!";
                        break;
                }
                break;

            case 5:
                cout<<"1] Veg. Biryani Rs.180"<<endl;
                cout<<"2] Veg. Cheese Biryani Rs.220"<<endl;
                cout<<"3] Double Cheese Paneer Biryani Rs.240"<<endl;
                cout<<"Enter which Biryani you want to order?:"<<endl;
                cin>>ch;

                cout<<"Enter the Quntity:"<<endl;
                cin>>qty;

                switch(ch)
                {
                    case 1:
                        item="Veg. Biryani";
                        amount=180;
                        break;

                    case 2:
                        item=" Veg. Cheese Biryani";
                        amount=220;
                        break;

                    case 3:
                        item="Double Cheese Paneer Biryani";
                        amount=240;
                        break;

                    default:
                        cout<<"Invalid order..!";
                        break;
                }
                break;

            case 6:
                exit(0);
                break;
            
                
        }
         cout<<"-------------------Order Summary--------------------"<<endl;
        if(choice>=1 && choice<=5)
        {
            tot=amount*qty;
           
            cout<<"Your name:"<<name<<endl;
            cout<<"Your Order:"<<item<<endl;
            cout<<"Your  order will be delivered in 40 mintues"<<endl;
            cout<<"Total Bill:"<<tot<<endl;
        }
    }while(choice!=7);
}