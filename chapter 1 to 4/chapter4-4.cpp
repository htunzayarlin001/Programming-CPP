#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {3, 4, 6, 8, 12};

    int x = 7;

    auto it = s.lower_bound(x); // first element >= 7
    if (it == s.end()) {
        it--; // largest element
        cout << "Nearest element: " << *it << "\n";
    } else if (it == s.begin()) {
        cout << "Nearest element: " << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
        if (x - b < a - x) cout << "Nearest element: " << b << "\n";
        else cout << "Nearest element: " << a << "\n";
    }

    return 0;
}