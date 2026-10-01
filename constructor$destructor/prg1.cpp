#include<iostream>
using namespace std;
class Emp
{
    public:
    Emp()
    {
        cout<<"Constructor called"<<endl;
    }
};
class Man:public Emp
{
    public:
    Man()
    {
        cout<<"manager Constructor called"<<endl;
    }
};
class Family:public Emp
{
    public:
    Family()
    {
        cout<<"Family Constructor called"<<endl;
    }
};
class Director:public Man,public Family
{
    public:
    Director()
    {
        cout<<"Director Constructor called"<<endl;
    }
};
int main()
{
   // Emp e;
   // Man m;
    Director d;
    return 0;
}