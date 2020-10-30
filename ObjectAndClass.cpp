#include<bits/stdc++.h>
using namespace std;
// to create  a class ,use the class keyword
// Example
// you can not access value or attribute inside the private section but you can access inside public section
class MyName
{
    private:
        string firstName;
        string lastName;
    public:
    //under public: key word we usually add some method for that class
        void enter();
        void print();
};
// we can make the method both inside and outside the class but it will be cleaner when we create outside the class
void MyName::enter()
{
    cout<<"Enter you first name:";      fflush(stdin);      getline(cin,firstName);
    cout<<"Enter your last name:";      fflush(stdin);      getline(cin,lastName);
}
//and to access the method we use symbol or keyword :: + name method to access to it
void MyName::print()
{
    cout<<"Your first Name:"<<firstName<<endl;
    cout<<"you last name:"<<lastName<<endl;
}
int main()
{
    //we can create an Object when we already create an class;
    MyName edward;
    edward.enter();
    edward.print();
    return 0;
}