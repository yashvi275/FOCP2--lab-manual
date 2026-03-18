#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    // Check Perfect Number
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        cout << num << " is a Perfect Number\n";
    else
        cout << num << " is NOT a Perfect Number\n";

    // Check Armstrong Number
    int original = num, result = 0, digits = 0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        result += pow(rem, digits);
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong Number\n";
    else
        cout << num << " is NOT an Armstrong Number\n";

    return 0;
}
