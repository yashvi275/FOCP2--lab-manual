#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 5;
    b = 10;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After swapping, first number is: " << a ;
    cout << "After swapping, second number is: " << b ;
    return 0;

}
