//Htet Aung Khant
//htetaung23.ha@gmail.com

#include<iostream>
using namespace std;

class Database
{
private:
    int id[10];
    string name[20];
    string password[20];
    int age[10];
    string location[20];

public:

    int n;

    void addFun()
    {
        int i;

        cout<<"\nEnter how many users you want: ";
        cin>>n;

        for(i=0; i<n; i++)
        {
            cout<<"\nEnter User ID: ";
            cin>>id[i];
            cout<<"Enter User Name: ";
            cin>>name[i];
            cout<<"Enter Password: ";
            cin>>password[i];
            cout<<"Enter Age: ";
            cin>>age[i];
            cout<<"Enter Location: ";
            cin>>location[i];
        }
    }

    void displayFun()
    {
        if(name[0] != "\0"){
            cout<<"\n";
        for(int i=0; i<n; i++)
        {
            cout<<id[i]<<"  "<<name[i]<<"     "<<password[i]<<"     "<<age[i]<<"  "<<location[i]<<endl;
        }
        printf("\n");
        }else{
            cout<<"\nNo Data to display!\n";
        }
    }

    void searchFun()
    {
        int sId,found;
        cout<<"\nEnter user ID to find: ";
        cin>>sId;

        cout<<"\n";
        for(int i=0; i<n; i++)
        {
            if( id[i] == sId )
            {
                found=1;
                cout<<id[i]<<"  "<<name[i]<<"     "<<password[i]<<"     "<<age[i]<<"  "<<location[i]<<endl;
            }
        }

        if(!found)
        {
            cout<<"User not found\n";
        }
    }

};


int main()
{
    Database mydb;

    int choice;
    do
    {
        cout<<"\n1.INSERT USER DATA\n";
        cout<<"2.DISPLAY USER DATA\n";
        cout<<"3.FIND USER DATA\n";
        cout<<"0.EXIT\n\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            mydb.addFun();
            cout<<"-------------------------------------------------------------\n";
            break;
        case 2:
            mydb.displayFun();
            cout<<"-------------------------------------------------------------\n";
            break;
        case 3:
            mydb.searchFun();
            cout<<"-------------------------------------------------------------\n";
            break;
        }

        if(choice == 0)
        {
            cout<<"\n--------------------------------------------------\n";
            cout<<"\t   Thanks for enjoy with us\n";
            cout<<"--------------------------------------------------\n";
        }

    }
    while(choice!=0);

    return 0;
}
