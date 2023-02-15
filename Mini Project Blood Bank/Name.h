#ifndef Name_H_INCLUDED
#define Name_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Name
{
protected:
    string name;
public:
    string get_name();
    void set_name( string );
};
void Name::set_name(string n)
{
    name=n;
}
string Name::get_name()
{
    return name;
}

#endif // DEPARTMENT_H_INCLUDED
