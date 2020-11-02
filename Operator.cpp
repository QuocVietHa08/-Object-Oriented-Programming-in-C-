#include<bits/stdc++.h>
using namespace std;

class faction
{
 private: 
    int numberator,denominator;
    public:
    // input method using operator 
    friend istream &operator>>(istream &in,faction &a)
    {
        cout<<"Enter faction numberator :";
        in>>a.numberator;
        cout<<"Enter faction denominatior:";
        in>>a.denominator;
        return in;
    }
    //output method using operator
    friend ostream &operator<<(ostream &out, faction a)
    {
        out<< a.numberator <<"/"<<a.denominator<<endl;
        return out;
    }
    // some simple method with operator
    friend faction operator+(faction a,faction b)
    {
        faction c;
        c.numberator = a.numberator*b.denominator + a.denominator*b.numberator;
        c.denominator = a.denominator*b.denominator;
        return c;
    }
    friend faction operator-(faction a,faction b)
    {
        faction c;
        c.numberator = a.numberator*b.denominator - a.denominator*b.numberator;
        c.denominator = a.denominator*b.denominator;
        return c;
    }
    friend faction operator*(faction a,faction b)
    {
        faction c;
        c.numberator = a.numberator*b.numberator; 
        c.denominator = a.denominator*b.denominator;
        return c;
    }friend faction operator/(faction a,faction b)
    {
        faction c;
        c.numberator = a.numberator*b.denominator;
        c.denominator = a.denominator*b.numberator;
        return c;
    }
};
int main()
{
    faction a,b,c,d,e,f;

    cout<<"Enter faction a:"<<endl;
    cin>>a;
    cout<<"Enter faction b:"<<endl;
    cin>>b;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    cout<<c;
    cout<<d;
    cout<<e;
    cout<<f;
    return 0;
}