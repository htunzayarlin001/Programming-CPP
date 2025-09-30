#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter 5 integers (a, b, c, d, e): ";
    cin >> a >> b >> c >> d >> e;

    if (a > b) {
        swap(a, b);
    }

    if (c > d) {
        swap(c, d);
    }

    if (a > c) {
        swap(b, d);
        c = a;
    }

    if (a == e) {
        if (a > b) {
            swap(a, b);
        }

        if (c > a) {
            swap(b, d);
            a = c;
        }

        if (a > d) {
            cout << "Result: d = " << d << endl;
        } else {
            cout << "Result: a = " << a << endl;
        }
    }

    cout << "\nFinal values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}