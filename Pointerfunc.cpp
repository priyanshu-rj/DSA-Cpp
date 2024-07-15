#include <bits/stdc++.h>
using namespace std;
int* push(int arr[],int size,int newElement){
    int* array = new int[size+1];
     array[0] =  newElement;
    for(int i=1;i<=size;i++){
        array[i] = arr[i-1]; 
    }
    return array;
}
int main() {
    int size=5;
    int arr[size]={1,2,3,4,5};
//   cout << "Hello world!";
    int newElement;
    cin>>newElement;
    int* array = push(arr,size,newElement);
    for(int i=0 ; i<=size; i++){
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}