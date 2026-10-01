#include<iostream>
using namespace std;
class Emp
{
    public:
    Emp()
    {
        cout<<"Constructor called"<<endl;
    }
    ~Emp()
    {
        cout<<"Destructor called"<<endl;
    }

};
class Man:public Emp
{
    public:
    Man()
    {
        cout<<"manager Constructor called"<<endl;
    }
    ~Man()
    {
        cout<<"manager Destructor called"<<endl;
    }
};
class Family:public Emp
{
    public:
    Family()
    {
        cout<<"Family Constructor called"<<endl;
    }
    ~Family()
    {
        cout<<"Family Destructor called"<<endl;
    }
};
class Director:public Man,public Family
{
    public:
    Director()
    {
        cout<<"Director Constructor called"<<endl;
    }
    ~Director()
    {
        cout<<"Director Destructor called"<<endl;
    }
};
int main()
{
   // Emp e;
   // Man m;
    Director d;
    return 0;
}