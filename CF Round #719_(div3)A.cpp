#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;cin>>TC;
    while(TC--){
        int n;string S;
        cin>>n>>S;
        set<char> s;
        bool f = true;
        char p = S[0];
        s.insert(S[0]);
        for(int i=1;i<n;i++){
            if(S[i] != p){
                if( s.find(S[i]) != s.end() ){
                    f = false;
                    break;
                }
                else{
                    p = S[i];
                }
            }
            s.insert(S[i]);
        }
        if(f == true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
