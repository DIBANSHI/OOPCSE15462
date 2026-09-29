//implementatin to perform basic to class
//class to basic
#include<iostream>
#include<cmath>
using namespace std;
class Currency
{
    int rs,ps;
    public:
    Currency(float amt)
    {
        rs=(int)amt;
        ps=round((amt-rs)*100);//  (amt*100-rs*100);another way to do it..
    }
    void show()
    {
        cout<<"Rs: "<<rs<<" Ps: "<<ps<<endl;
    }
    operator float()
    {
        return(rs*100+ps)/100.0;
    }
};

int main()
{
    Currency c=145.59;
    c.show();
    float amt=c;
    cout<<"AMOUNT: "<<amt<<endl;
}