#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if( k == 0 && arr[0] > 1 ){
        cout<<1<<endl;
    }
    else if(k == 0 && arr[0] <= 1 ){
        cout<<-1<<endl;
    }
    else if( n == k){
        cout<<arr[n-1]<<endl;
    }
    else if( arr[k-1] < arr[k] ){
        cout<<arr[k-1]<<endl;
    }
    else if( arr[k-1] == arr[k] ){
        cout<<-1<<endl;
    }
}
