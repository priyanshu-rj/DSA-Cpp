// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> v){
//     cout<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//          cout<< v[i] <<" ";
//     }
//     cout <<endl;
// }

// int main(){
//     vector<int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     printvec(v);
// }


//code for multi array 


// #include<bits/stdc++.h>
// using namespace std;
// void printVec(vector<int> &v){
//     cout<<"size"<<v.size()<<endl;
//     for(int i=0; i<v.size();i++){
//         cout<< v[i];
//     }
//     cout<<endl;
// }
// int main(){
//     int N;
//     cin>>N;
//     vector<int>  v[N];
//     for(int i=0; i<N;i++){
//         int n;
//         cin>>n;
//         for(int j=0;j<n;j++){
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }
// for(int i=0;i<N;i++){
//     printVec(v[i]);
// }
// cout<<v[0][0];
// }


 
//*vector of vector * for dynamic purpose


#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
    cout<<"size"<<v.size()<<endl;
    for(int i=0; i<v.size();i++){
        cout<< v[i];
    }
    cout<<endl;
}
int main(){
    int N;
    cin>>N;
    vector<vector<int>>  v;
    for(int i=0; i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
    v.push_back(temp);
    }
for(int i=0;i<v.size();i++){
    printVec(v[i]);
}
cout<<v[0][0];
}