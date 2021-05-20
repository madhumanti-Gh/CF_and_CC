#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<ll> ord;
    for(int i=1;i<=9;i++){
        ll p=i, x= i;int j=1;
        while(j <= 9){
            ord.push_back(p);
            p = (p*10 + x);j++;
        }
    }
    sort(ord.begin(), ord.end());
    int m = ord.size();
    int TC;cin>>TC;
    while(TC--){
        ll n;
        cin>>n;
        if(n > 999999999){
        	cout<<m<<endl;
        	continue;
		}
        for(int i=0;i<m;i++){
            if(ord[i] >= n){
            	if(ord[i] == n){
	                cout<<(i+1)<<endl;
	            }
	            else if(ord[i] > n){
	                cout<<(i)<<endl;
	            }
                break;
            }
        }
    }
}
