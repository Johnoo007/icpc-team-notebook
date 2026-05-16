#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // Write solution here
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    for(int i = n-1 ; i>=0 ; i--){
        if(vec[i]==-1||vec[i]==0){
            continue;
        }
        
        for(int pos = i-1 ; pos >= i-vec[i] ; pos--){
            if(pos<0){
                cout<<-1;
                return;
            }
            if(vec[pos]!=vec[i]+pos-i && vec[pos]!=-1 ){
                cout<<-1;
                return;
            }else{
                vec[pos]=vec[i]+pos-i;
            }
        }

    }
    if(vec[0] != 0 && vec[0] != -1){
        cout<<-1;
        return;
    }vec[0]=0;

    int unknown=0;
    int known=0;
    for(int i = 0 ; i<n ; i++){
        if(vec[i]==-1){
            unknown++;
        }else if(vec[i] == 0){
            known++;
        }
    }

    cout<<known<<" "<<known+unknown;

}

int main() {
    fastio();
    int t = 1;
    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);
    // cin >> t;
    while (t--) solve();
    return 0;
}