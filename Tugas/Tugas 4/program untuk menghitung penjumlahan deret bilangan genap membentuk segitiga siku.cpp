#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int a = 2; a <= 10; a += 2) {
        total += a;
        cout << "2";
        for (int b = 4; b <= a; b += 2) {
            cout << " + " << b;
        }
        cout << " = " << total << endl;
    }
    return 0;
}
