#include <iostream>
using namespace std;

void Showmenu()
{
    cout << "*************MENU**************" << endl;
    cout << "       1)Check Balance" << endl;
    cout << "       2)Deposit Money " << endl;
    cout << "       3)Withdraw Money" << endl;
    cout << "       4)Exit-->" << endl;
    cout << "*******************************" << endl;
}

int main()
{

    int option;
    double balance = 500;

    do
    {

        Showmenu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {

        case 1:
            cout << "Balance : " << balance << "Rs. " << endl;
            break;

        case 2:
            cout << "Deposit amount: ";
            double depositamount;
            cin >> depositamount;
            balance += depositamount;
            break;

        case 3:
            cout << "Withdraw amount: ";
            double withdrawamount;
            cin >> withdrawamount;
            if (withdrawamount <= balance)
            {
                balance -= withdrawamount;
            }
            else
            {
                cout << "Not Enough Money in your Account! "<<endl;
            }
            break;

        case 4:
            cout << "Thank You";
            break;

        default:
            cout << "Invalid Option!";
            break;
        }

        continue;

    } while (option != 4);

    return 0;
}
