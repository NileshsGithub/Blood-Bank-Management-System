#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED
#include<string>
#include<iostream>
#include<regex>
using namespace std;
class Contact
{
protected:
    string phone_no;
    
public:
    void set_phone_no(string);
    
    string get_phone_no();
    
};
void Contact::set_phone_no(string p)  
{
    phone_no=p;

}

string Contact::get_phone_no()
{
    return phone_no;
}

#endif // CONTACT_H_INCLUDED
