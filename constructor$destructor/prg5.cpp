#include<iostream>
using namespace std;
class A
{
    
    public:
    A(int x)
    {
        cout<<"Constructor of A called"<<endl;
    }

};
class B:public A
{
    public:
    B(int x,int y):A(x+y)//activates parent constructor with parameter
    {
        cout<<"Constructor of B called"<<endl;
    }
};
int main()
{
    //A obj;
    
    B obb(10,20);
    return 0;
}