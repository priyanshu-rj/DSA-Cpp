/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;++i){
            long long candy_ct;
            cin>> candy_ct;
            bags.insert(candy_ct);
            
        }
        long long total_candy = 0;
        for(int i=0;i<k;++i){
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_candy += candy_ct;
            bags.erase(last_it);//dont use candy_ct all are delet if i use this 
            bags.insert(candy_ct/2);
        }
        cout << total_candy<<endl;
    }

    return 0;
}
