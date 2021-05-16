#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    double l;
    cin>>n>>l;
    double arr[n];
    for( int i = 0; i < n; i++ ){
        cin>>arr[i];
    }
    sort( arr, arr + n ) ;
    double imax = l - arr[ n - 1 ];
    double q = arr[ 0 ], p = arr[ 0 ];
    for( int i = 1; i < n; i++ ){
        q = arr[ i ];
        arr[ i ] = arr[ i ] - p;
        if( arr[ i ] > imax )imax = arr[ i ];
        p = q;
    }
    imax = imax / 2;
    if( imax < ( l - p ) )imax = l - p;
    if( imax < arr[0] )imax = arr[ 0 ];
    cout<<setprecision(9)<<fixed<<( imax )<<endl;
}
