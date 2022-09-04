#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;cin>>cases;
    while(cases--){
        int x,y;cin>>x>>y;int t=x+y;
        map<string,int>m={};
        while(t--){
            string s;cin>>s;m[s]++;
        }
        set<string>st={};
        for(auto p:m){if(p.second==1){st.insert(p.first);}}
        for(auto x:st)cout<<x<<"\n";
    }
}