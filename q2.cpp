#include<iostream>
using namespace std;
class Area;
{
    Private:
    int radius, ar;
    Public:
    void getData();
    void displayArea();
};
void Area::getData()
{
    cout<<" enter radius:";
    cin>>radius;
};
void Area::displayArea()
{
    ar=3.14*radius*radius;
    cout<<" area is :"<<ar;
}
