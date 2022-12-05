#include <iostream>
using namespace std;

class Bank
{

    char name[100], fatherName[100], address[100], type[100];
    float balance;

public:
    void openAccount();
    void depositMoney();
    void withdrawMoney();
    void displayAccount();
};

void Bank::openAccount()
{
    cout << "\nEnter your name: " << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "\nEnter your father name: " << endl;
    cin.ignore();
    cin.getline(fatherName, 100);

    cout << "\nEnter your Address: " << endl;
    cin.ignore();
    cin.getline(address, 100);

    cout << "\nType of account you want to open saving(s) or open(o): " << endl;
    cin.ignore();
    cin.getline(type, 100);

    cout << "\nEnter your first deposite Amount: " << endl;
    cin >> balance;
    cout << "\nYour Account is created Successfully! " << endl;
}

void Bank::depositMoney()
{
    int deposit;
    cout << "\n Enter money to deposit:" << endl;
    cin >> deposit;
    balance = balance + deposit;

    cout << "\nTotal Balance: " << balance << endl;
}

void Bank::withdrawMoney()
{

    int withdraw;

    cout << "\n Enter money to withdraw: " << endl;
    cin >> withdraw;

    balance = balance - withdraw;

    cout << "\nTotal Balance: " << balance << endl;
}

void Bank::displayAccount()
{
    cout << "\nYour name: " << name << endl;
    cout << "\nYour father name: " << fatherName << endl;
    cout << "\nAddress: " << address << endl;
    cout << "\nYour account type: " << type << endl;
    cout << "\nYour account total balance: " << balance << endl;
}

int main()
{

    Bank obj;
        int ch;
         char option;
   
    cout << "\n         Welcome to SIB Bank!       " << endl;
    cout << "\n"
         << endl;

    do
    {
        cout << "\n1) Open Account: " << endl;
        cout << "\n2) Deposit Money: " << endl;
        cout << "\n3) Withdraw Money: " << endl;
        cout << "\n4) View Account: " << endl;
        cout << "\n5) Exit: " << endl;

        cin>>ch;
        switch (ch)
        {
        case 1:
            cout << "\n1) Open Account: " << endl;
            obj.openAccount();
            break;

        case 2:
            cout << "\n2) Deposit Money: " << endl;
            obj.depositMoney();
            break;

        case 3:
            cout << "\n3) Withdraw Money: " << endl;
            obj.withdrawMoney();
            break;

        case 4:
            cout << "\n4) View Account: " << endl;
            obj.displayAccount();
            break;

        case 5:
            cout << "\n5) Exit: " << endl;
            if (ch == 5)
            {
                exit(1);
            
            }
            break;

        default:
            cout << "\n try again choose correct choice: " << endl;
            break;
        }

        cout << "\n If you want to continue without exit enter yes otherwise no (Y/N): " << endl;
         cin>>option;

        if (option == 'n' || option == 'N')
        {
           
            exit(0);

        }
    } while (option== 'y' || option == 'n');


    return 0;
}