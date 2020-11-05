#include<bits/stdc++.h>
using namespace std;
//Base class 
class Car 
{ 
    string name;
    int age;
    int weight;
    public:
    void input();
    void output();
}; 
   
// Sub class inheriting from Base Class(Parent) 
class Small_car : public Car 
{ 
    string producer;
    string type;
    public:
    void input();
    void output();
    
}; 
 //some method
 void Car::input()
 {
     cout<<"Enter your car name:";           fflush(stdin);      getline(cin,name);
     cout<<"Enter your car age:";            cin>>age;
     cout<<"Enter your car weight:";         cin>>weight;
 } 


 void Car::output()
 {
     cout<<" name :"<<name<<endl;
     cout<<" age :"<<age<<endl;
     cout<<" weight:"<<weight<<endl;
 }

void Small_car::input()
{
    cout<<"Enter your car producer:";       fflush(stdin);      getline(cin,producer);
    cout<<"Enter your car type:";           fflush(stdin);      getline(cin,type);
    Car::input();
}

void Small_car::output()
{
    cout<<"car producer:"<<producer<<endl;
    cout<<" type:"<<type<<endl;
    Car::output();
}
//main function 
int main()  
   { 
       Small_car a;
       a.input();
       a.output(); 
        return 0; 
   }  