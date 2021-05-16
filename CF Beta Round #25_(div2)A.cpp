#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,a,b;cin>>n;
    int freq[2] = {0};
    for( int i = 0; i < n; i++ ){
        int el;cin>>el;
        freq[el%2]++;
        if( el%2 == 0 )a = i+1;
        else b = i+1;
    }
    if( freq[0] > freq[1] )cout<<b<<endl;
    else cout<<a<<endl;
}
