#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int a = 1; a <= 19; a += 2) {
        cout << a;
        total += a;
        if (a < 19) {
            cout << " + ";
        }
    }

    cout << " = " << total << endl;

    return 0;
}
