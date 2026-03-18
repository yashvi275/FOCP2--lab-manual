#include <iostream>
using namespace std;

int main() {
    float salaries[10];
    float total = 0, average;

    cout << "Enter salaries of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cin >> salaries[i];
        total += salaries[i];  // add each salary to total
    }

    average = total / 10;  // calculate average

    cout << "Total salary = " << total << endl;
    cout << "Average salary = " << average << endl;

    return 0;
}
