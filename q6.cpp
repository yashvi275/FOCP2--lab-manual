#include<iostream>
using namespace std;
int main(){
    int bonus, net_salary, basic_salary;
    cout<<"Enter basic salary: ";
    cin>>basic_salary;
    bonus = 12/100 * basic_salary;
    net_salary = basic_salary + bonus;
    cout<<"bonus is: "<<bonus<<endl;
    cout<<"Net salary is: "<<net_salary;
    return 0;
}
