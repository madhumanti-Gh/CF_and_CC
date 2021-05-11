#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;
    cin>>TC;
    while(TC--){
        int n,m;cin>>n>>m;
        ll arr[n][m];
        multiset< pair<ll, int> > st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j] = 0;
                ll a;cin>>a;
                st.insert( {a,i} );
            }
        }
        int p=0;
        while(p<m){
            pair<ll, int> a = *st.begin();
            arr[a.second][p] = a.first;
            st.erase(st.begin());
            p++;
        }
        
        while(!st.empty()){
            pair<ll, int> a = *st.begin();
            int id = a.second;
            int p=0;
            while(p < m){
                if(arr[id][p] == 0){
                    arr[id][p] = a.first;break;
                }
                p++;
            }
            st.erase(st.begin());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}
}
