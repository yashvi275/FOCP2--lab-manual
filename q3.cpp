#include<iostream>
using namespace std;
int main(){
    float Celsius, Fahrenheit;
    cout<<"Enter temperature in Celsius: ";
    cin>>Celsius;
    Fahrenheit = (Celsius * 9/5) + 32;
    cout<<"Temperature in Fahrenheit: "<<Fahrenheit;
    return 0;
}
