#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;
    cin>>TC;
    while(TC--){
    ll A,B;cin>>A>>B;
    ll x,y,z;
    x = A;
    y = (B-1)*A;
    z = x+y;
    if( B == 1 ){
        cout<<"NO\n";
    }
    else if( B == 2){
        y = (B+1)*A;
        z = 2*(A*B);
        cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
    }
    else{
        cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
    }
}
}
