#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int a = 2; a <= 20; a += 2) {
        cout << a;
        total += a;
        if (a < 20) {
            cout << " + ";
        }
    }

    cout << " = " << total << endl;

    return 0;
}
