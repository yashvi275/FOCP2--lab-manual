#include<iostream>
using namespace std;
class Average
{
    private:
    int number1, number2, number3;
    int average;
    public:
    void getData();
    void displayAverage();
};
void Average::getData()
{
    cout<<" enter number1:";
    cin>>number1;
    cout<<" enter number2:";
    cin>>number2;
    cout<<" enter number3:";
    cin>>number3;
};
void Average::displayAverage()
{
    average=(number1+number2+number3)/3;
    cout<<" average is :"<<average;
}
int main()
{
    Average a1;
    a1.getData();
    a1.displayAverage();
    return 0;
}
