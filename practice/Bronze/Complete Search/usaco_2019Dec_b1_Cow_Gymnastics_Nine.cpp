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
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int N;
    int K;

    cin >> K >> N;

    vector<vector<int>> posi( K , vector<int>(N+1));

    for(int i=0;i<K;i++){
        for (int j=0;j<N;j++){
            int c;
            cin >> c;
            posi[i][c]=j;
        }
    }

    int ans=0;

    for(int a=1;a<=N;a++){
        for(int b=1;b<=N;b++){

            if(a==b) continue;

            bool con=true;

            for(int i=0;i<K;i++){
                if(posi[i][a]>posi[i][b]){
                    con=false;
                    break;
                }
            }

            if (con) ans++;
        }
    }

    cout<<ans;

    return 0;
}