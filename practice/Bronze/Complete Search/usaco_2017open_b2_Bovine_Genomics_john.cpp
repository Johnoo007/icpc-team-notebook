#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<string> vec;

void solve() {
    // Write solution here
    int N,M,ans=0;
    cin >> N >> M;
    for(int i = 0 ; i < 2*N ; i++){
        string temp;
        cin >> temp;
    }

    for(int i = 0 ; i < M ; i++){
        unordered_set<char> cha;
        int mark = 1;
        for(int j = 0 ; j < 2*N ; j++){
            if(j < N){
                cha.insert(vec[j][i]);
            }else{
                if(cha.count(vec[j][i])){
                    mark=0;
                    break;
                }
            }
        }
        ans+=mark;
    }

    cout<<ans;

}

int main() {
    fastio();
    int t = 1;
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    // cin >> t;
    while (t--) solve();
    return 0;
}
// 3 8
// AATCCCAT
// GATTGCAA
// GGTCGCAA
// ACTCCCAG
// ACTCGCAT
// ACTTCCAT