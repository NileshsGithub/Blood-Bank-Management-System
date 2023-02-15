#include <iostream>
#include "Data_base.h"
#include <cstring>
#include <unistd.h>
#include <windows.h>
using namespace std;
int main()
{
    system("cls");
    Data_base db;
    while (1)
    {
        int n;
        cout << "\n\t\t===========================================";
        cout << "\n\t\t|   Simple Blood Bank Management System   |" << endl;
        cout << "\t\t===========================================";
        cout << "\n";
        sleep(1);
        cout << "\n\t \t \t ::Enter Your Choice::" << endl;
        cout << "\n";
        sleep(1);
        cout << "\t\t -----------------------------------------";
        cout << "\n\t\t\t 1.To Add New Data        :\t\n ";
        sleep(1);
        cout << "\t\t -----------------------------------------";
        cout << "\n\t\t\t 2. To View List Of Donor :\t\n";
        sleep(1);
        cout << "\t\t -----------------------------------------";
        cout << "\n\t\t\t 3.To Search Donor        :\t\n";
        sleep(1);
        cout << "\t\t -----------------------------------------";
        cout << "\n\t\t\t 4.To Exit                :\t\n";
        sleep(1);
        cout << "\t\t -----------------------------------------\n\n";
        cout << "\t\t\t*Your Choice*             : ";
        sleep(1);
        cin >> n;
        switch (n)
        {

        case 1:
        {
            system("cls");
            db.Data("Add New");
        }
        break;

        case 2:
        {
            system("cls");
            db.Data("View");
        }
        break;
        case 3:
        {
            system("cls");
            db.Data("Search");
        }
        break;
        case 4:
        {
            cout << "\n";
            cout << "\t\t\t Succesylly" << endl;
            return 0;
        }
        break;

        default:
        {
            system("cls");
            cout << "\a\aPlease Enter your choice Correctly:\a\a" << endl;
        }
        break;
        }
    }
    return 0;
}
