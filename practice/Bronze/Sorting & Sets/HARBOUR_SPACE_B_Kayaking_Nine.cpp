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
    cout << "Hello, ICPC!" << endl;
}

int main() {
    fastio();

    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> a(2*n);

    for(int i=0;i<(2*n);i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int ans=INT_MAX;

    for(int i=0;i<(2*n);i++){
        for(int j=i+1;j<(2*n);j++){

            vector<int> temp;

            for(int k=0;k<(2*n);k++){
                if(k!=i && k!=j){
                    temp.push_back(a[k]);
                }
            }

            int ins = 0;
            for(int k=0;k<temp.size();k+=2){
                ins += temp[k+1]-temp[k];
            }
            ans=min(ans,ins);
        }
        
    }

    cout << ans;

    


    return 0;
}