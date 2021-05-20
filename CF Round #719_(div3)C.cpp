#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool IsSafe(int n, int i, int j){
    if(i < 0 || i >= n || j >= n  || j < 0){
        return false; 
    }
    else{
        return true;
    }
}

int main(){
    int TC;cin>>TC;
    while(TC--){
        int n;
        cin>>n;
        int arr[n][n] = {0};
        if(n == 1){
        	cout<<1<<endl;
            continue;
		}
        if(n == 2){
            cout<<-1<<endl;
            continue;
        }
        int p=0,q = (n*n)+1;
        for(int x=0;x<n;x++){
            if(x%2 == 0){
                int j=0, i = x;
                while( IsSafe(n,i,j) ){
                    p +=1;
                    arr[i][j] = p;
                    i++;j++;
                }
            }
            else {
                int j=0,i = x;
                while( IsSafe(n,i,j) ){
                    q -=1;
                    arr[i][j] = q;
                    i++;j++;
                }
            }
        }
        for(int y=1;y<n;y++){
            if(y%2 == 0){
                int i=0, j = y;
                while( IsSafe(n,i,j) ){
                    p += 1;
                    arr[i][j] = p;
                    i++;j++;
                }
            }
            else {
                int i=0,j = y;
                while( IsSafe(n,i,j) ){
                    q -= 1;
                    arr[i][j] = q;
                    i++;j++;
                }
            }
        }
        swap(arr[n-1][0] , arr[0][n-1]);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
