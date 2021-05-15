#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n;
    string s,t;
    cin>>n>>s;
    map<string, int> mp;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        string r = "";
        r.push_back(s[i]);
        r.push_back(s[i+1]);
        mp[r]++;
        if(cnt < mp[r]){
            cnt = mp[r];
            t = r;
        }
    }
    cout<<t<<endl;
}
