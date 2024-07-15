#include <bits/stdc++.h>
using namespace std;

void element(stack<int> &s, int count, int size) {
    if (count == size / 2) {
        s.pop();
        return;
    }
    int upper = s.top();
    s.pop();
    element(s, count + 1, size);
    s.push(upper);
    
}
int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    int count = 0;
    int size = s.size();
    element(s, count, size);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
