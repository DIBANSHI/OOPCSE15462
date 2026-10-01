#include<iostream>
using namespace std;
class A
{
    
    public:
    A()
    {
        cout<<"Constructor of A called"<<endl;
    }

};
class B:public A
{
    public:
    B(int x)
    {
        cout<<"Constructor of B called"<<endl;
    }
};
int main()
{
    //A obj;
    
    B obb(10);
    return 0;
}