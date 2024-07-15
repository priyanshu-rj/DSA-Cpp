#include <iostream>
#include <stack>

using namespace std;

// Function to compute factorial using recursion
int factorial(int n, stack<int>& callStack) {
    // Push the current value of 'n' onto the call stack
    callStack.push(n);

    // Base case: If 'n' is 0 or 1, return 1
    if (n == 0 || n == 1) {
        // Pop the value of 'n' from the call stack before returning
        n = callStack.top();
        callStack.pop();
        return 1;
    }

    // Recursive case: Multiply 'n' by factorial of (n - 1)
    int result = n * factorial(n - 1, callStack);

    // Pop the value of 'n' from the call stack before returning
    n = callStack.top();
    callStack.pop();

    return result;
}

int main() {
    int n = 5; // Compute factorial of 5
    stack<int> callStack; // Stack to keep track of recursive calls
    int result = factorial(n, callStack);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}
