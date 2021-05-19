#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int TC;cin>>TC;
    while(TC--){
        ll n;
        cin>>n;
        ll A[n],B[n];
        map<ll, ll> mp;
        for(ll i=0;i<n;i++){
            cin>>A[i];
            B[i] = A[i] - (i+1);
            mp[B[i]]++;
        }
        ll m=0;
        map<ll, ll>::iterator it;
        for(it = mp.begin();it!= mp.end();it++){
            ll p = it->second;
            m += ( ( (p)* (p-1))/2);
        }
        cout<<m<<endl;
    }
}
