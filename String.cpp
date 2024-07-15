#include <iostream>
#include <string>
using namespace std;

void reverse(string &name, int i, int j) {
    if (i >= j)
        return;
    swap(name[i], name[j]);
    reverse(name, ++i, --j);
}

int main() { 
    string s = "priyanshu";
    reverse(s, 0, s.length() - 1);
    cout << s;
    return 0;
}
