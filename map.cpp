#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";  //push values
    m.insert({4, "afg"}); //other method to push  

    // map<int,string> :: iterator it;
    // for(it = m.begin();it !=m.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    //use auto replacment of iterator;
     for(auto it = m.begin();it !=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl; // it->first
    }

 //other replacemt of same code  and use & for refrence not copy (&pr)
    // for(auto pr : m){
    //     cout << pr.first<<" "<<pr.second<<endl;
    // }

//for finding the values 
    auto it = m.find(); //it return iterator
    if(it == m.end()){// m.end means last iterator ka agla iterator
        cout<<"no values";
    }
    else{
        cout<< (*it).first << " "<<(*it).second; 
    }
//erase 
   // m.erase(3);



   // if i run this    then we get :: abcacdafgcdc this output 
    // for(int i=0;i<m.size();i++){
    //     cout << m[i];
    // }



//count number of frequency how many number it is repeat string , hashing is not use becasue it store is array number hash table it is string 
    // map<string,int> m;
    // int n ;
    // cin>>n;
    // for(int i=0 ;i<n;i++){
    //     string s ;
    //     cin>>s;
    //     m[s]++;
    // }
    // for(auto pr : m){
    //     cout<<pr.first<<" "<<pr.second<<endl;    }




    return 0;
}  


//in map all the values is unique if same key we put than it store last 
//values 