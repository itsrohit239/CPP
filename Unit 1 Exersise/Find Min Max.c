#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int min_num, max_num;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
  
    if (a <= b && a <= c) {
        min_num = a;
    } else if (b <= a && b <= c) {
        min_num = b;
    } else {
        min_num = c;
    }

    if (a >= b && a >= c) {
        max_num = a;
    } else if (b >= a && b >= c) {
        max_num = b;
    } else {
        max_num = c;
    }
    
    cout << "Minimum number is: " << min_num << endl;
    cout << "Maximum number is: " << max_num << endl;
    
    return 0;
}
