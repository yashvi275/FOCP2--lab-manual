#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total;

    cin >> quantity >> price;

    total = quantity * price;

    if (quantity > 1000)
        total = total - (total * 0.10);

    cout << total;

    return 0;
}
