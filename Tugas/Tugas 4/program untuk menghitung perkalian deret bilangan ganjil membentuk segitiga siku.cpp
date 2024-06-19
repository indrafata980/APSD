#include <iostream>
using namespace std;

int main() {
    int total = 1;
    for (int a = 1; a <= 9; a += 2) {
        total *= a;
        cout << "1";
        for (int b = 3; b <= a; b += 2) {
            cout << " * " << b;
        }
        cout << " = " << total << endl;
    }
    return 0;
}
