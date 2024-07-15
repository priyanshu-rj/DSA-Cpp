#include <iostream>
using namespace std;

void ptr(int arr[]){
    cout << *(arr + 1); // Dereference the pointer to arr and print the value at the next memory location
}

int main() {
    int arr[5] = {1, 5, 3, 4, 5};
    ptr(arr);
    return 0;
}
