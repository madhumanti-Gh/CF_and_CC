#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int TC;cin>>TC;
    while(TC--){
        string a,b,c,d;
        cin>>a>>b;
        int A,B;
        if(a.size() <= b.size()){
            c = a;d = b;
            A = a.size();B = b.size();
        }
        else if(a.size() > b.size()){
            c = b;
            d = a;
            A = b.size();B = a.size();
        }
        set< pair<int, pair<int, int> > > s;    // size, index
        for(int i=0;i<A;i++){
            for(int j=0;j<B;j++){
                if(c[i] == d[j]){
                    int p = i,q = j,n = 0;
                    bool f = false;
                    while(p < A || q < B ){
                        if(c[p] == d[q]){
                            n++;p++;q++;
                        }
                        else{
                            f = true;
                            break;
                        }
                    }
                    
                    s.insert( {n, {i,j}} );
                }
            }
        }
        if(s.size() == 0){
            cout<<(A+B )<<endl;
            continue;
        }
        pair<int, pair<int, int> > t;
        auto it = s.end();it--;
        t = (*it);
        cout<<(A+B - (2* (t.first)) )<<endl;
    }
}
