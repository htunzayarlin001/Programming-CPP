#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << "Count of 3: " << s.count(3) << "\n"; // 1
    cout << "Count of 4: " << s.count(4) << "\n"; // 0

    s.erase(3);

    s.insert(4);

    cout << "Count of 3 after erase: " << s.count(3) << "\n"; // 0
    cout << "Count of 4 after insert: " << s.count(4) << "\n"; // 1

    cout << "Elements in set (sorted): ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}