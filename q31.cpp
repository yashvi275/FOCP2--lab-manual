#include <iostream>
using namespace std;

int main() {
    int codes[5];
    int count = 0;

    cout << "Enter 5 defect codes:\n";
    for (int i = 0; i < 5; i++) {
        cin >> codes[i];
    }

    for (int i = 0; i < 5; i++) {
        if (codes[i] % 3 == 0 && codes[i] % 5 == 0)
            count++;
    }

    cout << "Numbers divisible by both 3 and 5 = " << count;

    return 0;
}
