#include <iostream>
#include<vector>
using namespace std;
class Item
{
    public:
    string name;
    int quantity;
    double price;
};
void displaycart(const vector<Item>&cart)
{
    cout<<"\n----------------------SHOPPING CART----------------------\n";
    cout<<"Item Name\tQuantity\tPrice\n";
    cout<<"-----------------------------------------------\n";
    for(const auto& item:cart)
    {
        cout<<item.name<<"\t"<<item.quantity<<"\t\t"<<item.price<<"\t"<<item.quantity*item.price<<endl;
    }
}

double calculateTotal(const vector<Item>&cart)
{
    double total=0;
    for(auto item:cart)
    {
        total+=item.quantity*item.price;
    }
    return total;
}
void applyDiscount(vector<Item>&cart)
{
    for(auto& item:cart)
    {
        if(item.quantity>1000)
        {
            item.price*=0.90;
        }
    }
}
Item findMostExpensiveItem(const vector<Item>&cart)
{
    Item Expensive=cart[0];
    for(auto item:cart)
    {
        if(item.price>Expensive.price)
        {
            Expensive=item;
        }
    }
    return Expensive;
}
int main()
{
    vector<Item>cart;
    int n;
    cout<<"Enter the number of items in the cart: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Item item;
        cout<<"Enter item name: ";
        cin>>item.name;
        cout<<"Enter item quantity: ";
        cin>>item.quantity;
        cout<<"Enter item price: ";
        cin>>item.price;
        cart.push_back(item);
    }
    displaycart(cart);
    double total=calculateTotal(cart);
    cout<<"\nTotal Price: "<<total<<endl;
    applyDiscount(cart);
    displaycart(cart);
    Item expensive=findMostExpensiveItem(cart);
    cout<<"\nMost Expensive Item: "<<expensive.name<<"\t"<<expensive.quantity<<"\t"<<expensive.price<<endl;

}