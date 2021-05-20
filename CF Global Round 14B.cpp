#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;cin>>TC;
    while(TC--){
        double n;cin>>n;
        if(sqrt(n/2) == (int)sqrt(n/2) || sqrt(n/4) == (int)sqrt(n/4)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
