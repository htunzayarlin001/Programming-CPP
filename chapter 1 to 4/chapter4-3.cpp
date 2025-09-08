#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> m;

    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    cout << "Value of banana: " << m["banana"] << "\n"; // 3

    cout << "Value of aybabtu: " << m["aybabtu"] << "\n"; // 0 (auto-created)

    if (m.count("banana")) {
        cout << "\"banana\" exists in map\n";
    }
    if (!m.count("apple")) {
        cout << "\"apple\" does not exist in map\n";
    }

    cout << "All key-value pairs in map:\n";
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}