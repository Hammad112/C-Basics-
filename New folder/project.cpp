#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;
struct PURCHSE
{
	
};
class inventry
{
	public:
    int size = 0, quantity;
	string  name[100];
    int id, category;
	int date, cost, input;	
public:
void add_new_item()
{
    cout << "Fill the following form : "<<endl;
    cin.ignore(100, '\n');
    cout << "Item ID : ";
    cin>>id;
    cout << "Item Category : ";
    cin>> category;
    cout << "Item Name : ";
getline(cin, name[30]);
    cout << "Date of Purchase : ";
    cin>> date;
    cout << "Item Cost : ";
    cin>> cost;
    cout << "Quantity of item : ";
    cin>> quantity;

    ofstream outfile ("data.txt", ios::app);
    if (outfile.is_open())
        {
            outfile << id << '/' << category << '/' << name << '/' << date << '/' << cost << '/' << quantity <<endl;
            cout << "Data saved successfully."<<endl;
        }
    else
        {
            cout << "File can't be opened"<<endl;
        }
}

void sale()
{
    
    bool found = false;
    
    cout << "Enter the name of the item : ";
    cin.ignore(10, '\n');
	cin>> input;

    ifstream infile ("data.txt");

    for (int i = 0; !infile.eof(); i++)
    {
        infile>> id;
        infile>> category;
        getline(infile, name[i] ,'/');
        infile>>date;
        infile>>cost;
        infile>>quantity;
        infile.ignore(100, '\n');
        size++;

        if (id != 2)
        {
                if ( input == name[i])
            {
                cout << "How many items do you want to sell : ";
                int sell;
                cin >> sell;
                if (sell < quantity)
                {
                    quantity = quantity - sell;
                }
                else
                {
                    cout << "You don't have enough quantity"<<endl;
                }
                found = true;
            }
        }
    }
    infile.close();

    if (found)
    {
        ofstream outfile ("data.txt");
        for (int i = 0; i<size-1 ; i++)
        {
            outfile << id << '/' << category << '/' << name[i]<< '/' << date << '/' << cost << '/' << quantity<<endl;
        }
        }

    if (!found)
        {
            cout << "There is no item with that name."<<endl;
        }
}

void purchase()
{
    
    bool found = false;
    int size = 0;
    cout << "Enter the name of the item : ";
    cin.ignore(10, '\n');
    cin>>input;

    ifstream infile ("data.txt");

    for (int i = 0; !infile.eof(); i++)
    {
        infile>> id;
        infile>>category;
        getline(infile, name[i] ,'/');
        infile>>date;
        infile>> cost;
        infile>> quantity;
        infile.ignore(100, '\n');
        size++;

        if (id != "")
        {
                if ( input == name[i])
            {
                cout << "Enter the price of item : ";
                cin>> cost;
                cout << "Enter todays Date : ";
                cin>> date;
                cout << "Enter the quantity of item : ";
                cin>> quantity;
                found = true;
            }
        }
    }
    infile.close();

    if (found)
    {
        ofstream outfile ("data.txt");
        for (int i = 0; i<size-1 ; i++)
        {
            outfile << id << '/' << category << '/' << name[i] << '/' << date<< '/' << cost<< '/' << quantity<<endl;
        }
        }

    if (!found)
        {
            cout << "There is no item with that name."<<endl;
        }
}

void show_item_detail()
{
    
    ifstream infile ("data.txt");
    while (!infile.eof())
    {
        infile>>id;
       infile>> category;
        getline(infile, name[30] ,'/');
        infile>>date;
        infile>> cost;
        infile>>quantity;
        if (id != "")
            {
                cout << "Item ID : " << id << endl;
                cout << "Item Category : " << category << endl;
                cout << "Item Name : " << name << endl;
                cout << "Date of Purchase : " << date<< endl;
                cout << "Item Cost : " << cost << endl;
                cout << "Quantity of item : " << quantity << endl;
                cout << endl;
            }
    }
    infile.close();
}
};


int main()
{
    cout<<"================================================================================"
    <<"***********************************    WELCOME   *******************************";
    cout<<"|||||||||||||||||||||||||||||||||                  |||||||||||||||||||||||||||||";
    cout<<"*******************************   INVENTORY SYSTEM   ***************************";
    cout<<"================================================================================";
	cout<<"================================================================================";

    int choice = 0;
    while (choice != 5)
    {
        cout << "Enter your choice : " << endl;
        cout << "1 = Add new item"<<endl;
        cout << "2 = Purchase an item"<<endl;
        cout << "3 = Sell an item"<<endl;
        cout << "4 = Detail of items"<<endl;
        cout << "5 = Quit"<<endl;
        cout<<"================================================================================"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            {
                add_new_item();
                break;
            }
        case 2:
            {
                purchase();
                break;
            }
        case 3:
            {
                sale();
                break;
            }
        case 4:
            {
                show_item_detail();
                break;
            }
        case 5:
        {
            break;
        }
        default:
            {
                cout << "Invalid Choice"<<endl;
                cout << "Try again\n"<<endl;
            }
        }
    }

    cout << "Press enter to exit......";
    cin.ignore();
    cin.get();
    return 0;
}


