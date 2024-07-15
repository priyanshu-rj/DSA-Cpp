#include<bits/stdc++.h>
using namespace std;
void topElement(stack<int> &s){
    if(s.empty()){
      s.push(4);
      return;
    }
    else{
        int temp = s.top();
        s.pop();
        topElement(s);
        s.push(temp);
    }
      while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    topElement(s);
    return 0;
}

