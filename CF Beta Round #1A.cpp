#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    ll x = n/a ,y = m/a;
    if( n%a != 0 )x += 1;
    if( m%a != 0 )y += 1;
    cout<<(x * y)<<endl;
}
