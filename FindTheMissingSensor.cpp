#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;cin>>cases;
    while(cases--){
        int n,s=0;cin>>n;
        for(int i=0;i<n-1;i++){int q;cin>>q;s+=q;}
        cout<<(n*(n+1))/2-s<<"\n";
    }
}