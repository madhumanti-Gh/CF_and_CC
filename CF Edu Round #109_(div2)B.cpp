#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;cin>>TC;
    while(TC--){
        int n, p = 0, cnt = 0;
        pair<int, int> a,b;
        a = { 70 , 0 };
        b = { 0 , 0 };
        cin>>n;
        int arr[n];
        for( int i = 0; i < n; i++ ){
            cin>>arr[i];
            if( i == 0){
                a = {arr[i], i};
                b = {arr[i], i};
            }
            else if( i > 0 && p > arr[i] ){
                cnt++;
            }
            if( a.first > arr[i] ){
                a = { arr[i], i };
            }
            if( b.first < arr[i] ){
                b = {arr[i], i};
            }
            p = arr[i];
        }
        if( cnt == 0 )cout<<0<<endl;
        else{
            if( a.second == n-1 && b.second == 0 ){
                cout<<3<<endl;
            }
            else if( a.second == 0 || b.second == n-1 ){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}
