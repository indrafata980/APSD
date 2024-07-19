#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    for (a = 0; a < 5; ++a) {
        c = 0;
        for (b = 5; b > a; c += 2 * (b--)) {
            if (b > a + 1) {
                cout << 2 * b << " + ";
            } else {
                cout << 2 * b << " ";
            }
        }
        cout << "= " << c << endl;
    }
    cout << "----------" << endl;
    cout << "110" << endl;
    return 0;
}
