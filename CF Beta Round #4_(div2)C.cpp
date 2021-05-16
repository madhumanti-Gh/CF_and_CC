#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;cin>>n;
    map< string, int > mp;
    for( int i = 0; i < n; i++ ){
        string el;cin>>el;
        if( mp[ el ] == 0 ){
            cout<<"OK\n";
        }
        else{
            string y = el;
            cout<<el<<mp[el]<<endl;
        }
        mp[ el ]++;
    }
}
