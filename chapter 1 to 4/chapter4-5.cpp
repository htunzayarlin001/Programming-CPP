#include <iostream>
#include <bitset>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main() {
    cout << "===== BITSET =====\n";
    bitset<10> bits;
    bits[1] = 1;
    bits[3] = 1;
    bits[4] = 1;
    bits[7] = 1;

    cout << "Bitset: " << bits << "\n";
    cout << "bits[4]: " << bits[4] << "\n";
    cout << "bits[5]: " << bits[5] << "\n";
    cout << "Number of ones: " << bits.count() << "\n\n";

    cout << "===== DEQUE =====\n";
    deque<int> d;
    d.push_back(5);   
    d.push_back(2);  
    d.push_front(3);

    cout << "Deque elements after push_front/back: ";
    for (auto x : d) cout << x << " ";
    cout << "\n";

    d.pop_back();    
    d.pop_front();
    cout << "Deque elements after pop_front/back: ";
    for (auto x : d) cout << x << " ";
    cout << "\n\n";

    cout << "===== STACK =====\n";
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);

    cout << "Top element: " << s.top() << "\n";
    s.pop();
    cout << "Top after pop: " << s.top() << "\n\n"; 

    cout << "===== QUEUE =====\n";
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);

    cout << "Front element: " << q.front() << "\n";
    q.pop();
    cout << "Front after pop: " << q.front() << "\n\n";

    cout << "===== PRIORITY QUEUE =====\n";
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);

    cout << "Max element: " << pq.top() << "\n";
    pq.pop();
    cout << "Next max: " << pq.top() << "\n";

 
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(3);
    minpq.push(5);
    minpq.push(7);
    cout << "Min element: " << minpq.top() << "\n"; // 3

    return 0;
}