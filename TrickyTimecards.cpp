#include <bits/stdc++.h>
using namespace std;
int c_i(char c){return int(c-'0');}
int main(){
    int cases;cin>>cases;cin.ignore();
    while(cases--){
        string s;getline(cin,s);
        int i=0;
        while(s[i]!=','){cout<<s[i];i++;}
        int hrs=10*(c_i(s[i+1])+c_i(s[i+7])+c_i(s[i+13])+c_i(s[i+19])+c_i(s[i+25]))+c_i(s[i+2])+c_i(s[i+8])+c_i(s[i+14])+c_i(s[i+20])+c_i(s[i+26]);
        int mn=10*(c_i(s[i+4])+c_i(s[i+10])+c_i(s[i+16])+c_i(s[i+22])+c_i(s[i+28]))+c_i(s[i+5])+c_i(s[i+11])+c_i(s[i+17])+c_i(s[i+23])+c_i(s[i+29]);
        hrs+=mn/60;mn%=60;
        cout<<"=";
        if(hrs>0)cout<<hrs<<" hour";
        if(hrs>1)cout<<'s';
        if(mn>0){if(hrs>0){cout<<' ';}cout<<mn<<" minute";}
        if(mn>1)cout<<'s';
        cout<<"\n";
    }
}