#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd( int a, int b ){
    if( b == 0 ){
        return a;
    }
    return gcd( b, a%b );
}

int main(){
    int TC;cin>>TC;
    while(TC--){
        int k;cin>>k;
        int x = gcd( max( k, 100 - k ), min( k, 100 - k ) );
        int ans = ( k / x ) + ( (100 - k) / x );
        cout<<ans<<endl;
    }
}
