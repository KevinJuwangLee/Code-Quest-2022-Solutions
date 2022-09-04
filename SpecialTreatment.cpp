#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cases;cin>>cases;cin.ignore();
    while(cases--){
        string s,res="";getline(cin,s);
        for(char c:s){
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c==' ')res+=c;
        }
        cout<<res<<"\n";
    }
}