#include<iostream>
using namespace std;
int main(){
    int item_no, quantity, unit_price, amount, discount, total_amount;
    cout<<"Enter item no.: ";
    cin>>item_no;
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Enter unit price: ";
    cin>>unit_price;
    amount = quantity * unit_price;
    discount = 20/100 * amount;
    total_amount = amount - discount;
    cout<<"Total amount after discount is: "<<total_amount;
    return 0;

}
