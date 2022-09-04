#include <bits/stdc++.h>
using namespace std;
set<int>st={'a','e','i','o','u'};
int main(){
    int cases;cin>>cases;
    while(cases--){
        int j=0;
        string s,res="";cin>>s;
        while(j<s.length()){
            if(st.count(s[j])){res+=s[j+1];j+=2;}
            else j++;
        }
        cout<<res<<"\n";
    }
}