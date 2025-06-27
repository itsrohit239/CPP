#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter Value Of A: ";
    cin >> a;
    cout << "Enter Value Of B: ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap, A = " << a << ", B = " << b << endl;
    return 0;
}

