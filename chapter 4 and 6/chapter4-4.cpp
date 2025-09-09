#include <iostream>
#include <set>
using namespace std;

int main(){
set<int> s = {5, 2, 9, 1, 5, 6};
set<int>::iterator it = s.begin();

cout << *it << "\n";
for (auto it = s.begin(); it != s.end(); it++) {
cout << *it << "\n";
}

auto t = s.end(); t--;
cout << *t << "\n";
int y;
auto a = s.find(y);
if (a == s.end()) {
// x is not found
}

int x;
auto i = s.lower_bound(x);
if (i == s.begin()) {
cout << *i << "\n";
} else if (i == s.end()) {
i--;
cout << *i << "\n";
} else {
int a = *i; i--;
int b = *i;
if (x-b < a-x) cout << b << "\n";
else cout << a << "\n";
}
}