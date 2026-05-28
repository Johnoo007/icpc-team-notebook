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

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);


    int n;
    int m;

    cin >> n >> m;

    vector<string> spotty(n);
    for (int i=0;i<n;i++){
        cin >> spotty[i];
    }

    vector<string> plain(n);
    for (int i=0;i<n;i++){
        cin >> plain[i];
    }
    
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                
                set<string> spoty;
                for(int w=0;w<n;w++){
                    string s = "";
                    s+=spotty[w][i];
                    s+=spotty[w][j];
                    s+=spotty[w][k];
                    spoty.insert(s);
                }

                bool same = 1;

                for(int w=0;w<n;w++){
                    string s = "";
                    s+=plain[w][i];
                    s+=plain[w][j];
                    s+=plain[w][k];

                    if(spoty.count(s)){
                        same = 0;
                        break;
                    }
                }

                ans += same;
            }
        }
    }

    cout << ans;

    return 0;
}