#ifndef DATA_BASE_H_INCLUDED
#define DATA_BASE_H_INCLUDED
#include <string>
#include "Donar.h"
#include <vector>
#include <windows.h>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <unistd.h>
using namespace std;
class Data_base
{
protected:
    Donor don[1000];

public:
    Data_base() {}
    void Data(string s)
    {
        static int i = 0;
        if (s == "Add New")
        {
            string n;
            long int r;
            int t;

            cout << "\n\t\t\t Enter Name:" << endl;
            cout << " \t\t\t ";
            cin >> n;
            don[i].set_name(n);

            cout << "\n\t\t\t Enter Blood Group:" << endl;
            cout << " \t\t\t ";
            cin >> n;
            if (n == "A+") 
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "AB+")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "B+")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "O+")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "O-")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "A-")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "B-")
            {
                don[i].set_Blood_group(n);
            }
            else if (n == "AB-")
            {
                don[i].set_Blood_group(n);
            }
            else
            {
                cout << "\t\t\tEnter Valid Bloodgroup";
            }

            cout << "\n\t\t\t No.of Blood Donate:" << endl;
            cout << " \t\t\t ";
            cin >> t;
            if (t >= 0 && t <= 9)

            {
                don[i].set_no_of_blood_donate(t);
            }
            else
            {
                cout << "\t\t\t Enter Valid Input" << endl;
                
            }

            cout << "\n\t\t\t Last Date of Blood Donation:" << endl;
            cout << " \t\t\t ";
            cin >> n;
            don[i].set_last_date_of_blood_donation(n);

            cout << "\n\t\t\t Enter Phone No.:" << endl;
            cout << " \t\t\t ";
            cin >> n;
            if (n >= "0" && n <= "9")
            {
                if (n == "10")

                {
                    don[i].set_phone_no(n);
                }

                else
                {
                    cout << "\t\t\t Please Check the Phone Number" << endl;
                }
            }
            else
            {

                cout << "\t\t\t Enter valid input" << endl;
            }

            // system("cls");
            cout << "\n\t **Your data has been successfully added to the our database**\n"
                 << endl;
            system("PAUSE");
            system("CLS");
            i++;
        }
        if (s == "View")
        {
            int j;
            system("cls");
            for (j = 0; j < i; j++)
            { // fncall1353
                cout << "\n\t\t\t\tDonar No: " << j + 1 << endl;

                cout << "\t\t\tName                        : " << don[j].get_name() << endl;
                sleep(1);
                cout << "\t\t\tBlood Group                 : " << don[j].get_Blood_group() << endl;
                sleep(1);
                cout << "\t\t\tNo. of Blood Donation       : " << don[j].get_no_of_blood_donate() << endl;
                sleep(1);
                cout << "\t\t\tLast Date of Blood Donation : " << don[j].get_last_date_of_blood_donation() << endl;
                sleep(1);
                cout << "\n\t\t\t:-:Contact Info:-:" << endl;
                sleep(1);
                cout << "\t\t\tPhone No.                   : " << don[j].get_phone_no() << endl;

                cout << "\n\n";
                system("PAUSE");
                system("CLS");
            }
            if (j < 1)
                // brought to you by code-projects.org
                cout << "\aPlease Insert some data first.\n\n";
        }
        if (s == "Search")
        {
            string s;
            system("cls");
            cout << "\n\t\t\t\tEnter Name/Blood Group: " << endl;
            cout << "\t\t\t\t";
            cin >> s;
            for (int j = 0; j < i; j++)
            {
                if (s == don[j].get_Blood_group() || s == don[j].get_name())
                {
                    cout << "\n\t\t\t\tDonar No: " << j + 1 << endl;

                    cout << "\t\t\tName: " << don[j].get_name() << endl;
                    sleep(1);
                    cout << "\t\t\tBlood Group: " << don[j].get_Blood_group() << endl;
                    sleep(1);
                    cout << "\t\t\tNo. of Blood Donated: " << don[j].get_no_of_blood_donate() << endl;
                    sleep(1);
                    cout << "\t\t\tLast Date of Blood Donation: " << don[j].get_last_date_of_blood_donation() << endl;
                    sleep(1);
                    cout << "\t\t\t:-:Contact Info:-:" << endl;
                    sleep(1);
                    cout << "\t\t\tPhone No.: " << don[j].get_phone_no() << endl;

                    cout << "\n\n";
                    system("PAUSE");
                    system("CLS");
                }
            }
        }
    }
};

#endif // DATA_BASE_H_INCLUDED
