#include <iostream>
#include <bitset>
using namespace std;

int main(){
bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;
cout << s[4] << "\n"; // 1
cout << s[5] << "\n"; // 0
bitset<10> a(string("0010011010")); // from right to left
cout << a[4] << "\n"; // 1
cout << a[5] << "\n"; // 0
cout << a.count() << "\n"; // 4

bitset<10> c(string("0010110110"));
bitset<10> b(string("1011011000"));
cout << (c&b) << "\n"; // 0010010000
cout << (c|b) << "\n"; // 1011111110
cout << (c^b) << "\n"; // 1001101110
}