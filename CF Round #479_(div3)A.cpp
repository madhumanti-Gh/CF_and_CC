#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n;ll k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n == 1){
            break;
        }
        if(n%10 == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }
    cout<<n<<endl;
}
