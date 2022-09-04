#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;cin>>cases;
    while(cases--){
        double v,rf,rl;cin>>v>>rf>>rl;
        cout<<round((v*rl)/(rf-rl))<<"\n";
    }
}