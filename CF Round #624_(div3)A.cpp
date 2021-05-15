#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    cin>>n;
    while(n--){
    ll a,b;cin>>a>>b;
    int ans;
    if(a == b){
        ans = 0;
    }
    else if(a > b ){
        if( (a-b)%2 ==0 ){
            ans = 1;
        }
        else if( (a-b)%2 ==1 ){
            ans = 2;
        }
    }
    else if(a < b ){
        if( (b-a)%2 ==0 ){
            ans = 2;
        }
        else if( (b-a)%2 ==1 ){
            ans = 1;
        }
    }
    cout<<ans<<endl;
}
}
