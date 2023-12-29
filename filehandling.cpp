#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
      
         static string name,gender;
         int phoneNo;
         int age;
         string add;
         static int cId;
         char arr[100];

         void information()
         {
           cout<<"\nEnter the customer ID :";
           cin>>cId;
           cout<<"\nEnter the name :";
           cin>>name;
           cout<<"\nEnter the age :";
           cin>>age;
           cout<<"\n Address :";
           cin>>add;
           cout<<"\n Gender :";
           cin>>gender;
           cout<<"Your details are saved with us\n"<<endl;
        
         }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int back;
    static float charges;

    void trains()
    {
        string trainYellow[]={"PatnaHighCourt","PatnaAirport","PatnaJunction"};

        for(int a=0;a<3;a++)
        {
            cout<<(a+1)<<".train to "<<trainYellow[a]<<endl;

        }
        cout<<"\nWelcome to the Patna Metro"<<endl;
        cout<<"Press the number of the station of which you want to go:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"__________Welcome to Patna High Court__________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the route lines\n"<<endl;
                cout<<"1.pink"<<endl;
                cout<<"\tRs. 60"<<endl;
                cout<<"2.green"<<endl;
                cout<<"\tRs. 80"<<endl;
                cout<<"3.magenta"<<endl;
                cout<<"\tRs. 90"<<endl;

                cout<<"\nSelect the line you want to travel :";
                cin>>choice;
                if(choice==1){
                    charges=60;
                     cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else if(choice==2)
                {
                    charges=80;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                 else if(choice==3)
                {
                    charges=90;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                

                
            }
             case 2:
            {
                cout<<"__________Welcome to Patna Airport__________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the route lines\n"<<endl;
                cout<<"1.red"<<endl;
                cout<<"\tRs. 60"<<endl;
                cout<<"2.marron"<<endl;
                cout<<"\tRs. 80"<<endl;
                cout<<"3.blue"<<endl;
                cout<<"\tRs. 90"<<endl;

                cout<<"\nSelect the line you want to travel :";
                cin>>choice;
                if(choice==1){
                    charges=60;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else if(choice==2)
                {
                    charges=80;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                 else if(choice==3)
                {
                    charges=90;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                

                
            }
            case 3:
            {
                cout<<"__________Welcome to Patna Junction__________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the other lines \n"<<endl;
                cout<<"1.red"<<endl;
                cout<<"\tRs. 40"<<endl;
                cout<<"2.green"<<endl;
                cout<<"\tRs. 60"<<endl;
                cout<<"3.purple"<<endl;
                cout<<"\tRs. 70"<<endl;

                cout<<"\nSelect the lines you want to travel :";
                cin>>choice;
                if(choice==1){
                    charges=40;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else if(choice==2)
                {
                    charges=60;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                 else if(choice==3)
                {
                    charges=70;
                    cout<<"\nScan the QR Code fo the Payment"<<endl;
                    cout<<"\nYou have successfully booked the ticket"<<endl;
                    cout<<"You can go back to menu and collect the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input,shifting to the previous menu"<<endl;
                    trains();
                }
                cout<<"Press any key to go back to main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 4:
            {

            }
            default :
            {
                cout<<"Invalid input,Shifting you to the main menu!"<<endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;


class ticket: public registration,Details
{
    public:
    void Bill()
    {
        string station;
        ofstream outf("records.txt");
        {
            outf<<"_________Patna Metro________"<<endl;
            outf<<"__________Ticket_____________"<<endl;
            outf<<"______________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl;

            if(registration::choice==1)
            {
                station="Patna High Court";
            }
             else if(registration::choice==2)
            {
                station="Patna Airport";
            }
            else if(registration::choice==2)
            {
                station="Patna Junction";
            }
            outf<<"station\t\t"<<station<<endl;
            outf<<"train cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();

    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error";
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};


 
 void mainMenu()
 {
    int lchoice;
    int schoice;
    int back;

    cout<<"\t          Patna Metro \n"<<endl;
    cout<<"\t__________Main Menu_____________"<<endl;

    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t                                \t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 for train Registration         \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
    cout<<"\t|\t\t\t\t\t                                \t|"<<endl;
    cout<<"\t_____________________________________________"<<endl;
    cout<<"Enter the choice :";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"__________Customers__________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu ";
            cin>>back;

            if(back==1)
            {
               mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"___________Book a ticket using this system__________\n"<<endl;
            r.trains();
            break;
        }
        case 3:
        {
            cout<<"___________GET YOUR TICKET___________\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;

            if(back==1){
                t.dispBill();
                cout<<"Press any key to go back to main menu";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\nt________Thank-You_______"<<endl;
            break;
        }
        default :
        {
            cout<<"Invalid input,Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
 } 

int main(){
    Management Mobj;
    return 0;
}