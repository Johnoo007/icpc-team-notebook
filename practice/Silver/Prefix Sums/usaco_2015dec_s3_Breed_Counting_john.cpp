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

vector<int> cows(100005);
vector<int> PreA(100005);
vector<int> PreB(100005);
vector<int> PreC(100005);

int main() {
    fastio();
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int N, Q;
    cin >> N >> Q;
    for(int i = 1 ; i <= N ; i++){
        int cow;
        cin>>cow;
        if(cow == 1){
            PreA[i] = PreA[i-1]+1;
            PreB[i] = PreB[i-1];
            PreC[i] = PreC[i-1];
        }else if(cow == 2){
            PreA[i] = PreA[i-1];
            PreB[i] = PreB[i-1]+1;
            PreC[i] = PreC[i-1];
        }else{
            PreA[i] = PreA[i-1];
            PreB[i] = PreB[i-1];
            PreC[i] = PreC[i-1]+1;
        }
    }

    for(int i = 1 ; i <= Q ; i++){
        int a,b;
        cin >> a >> b;
        cout << PreA[b] - PreA[a-1] << " " << PreB[b] - PreB[a-1] << " " << PreC[b] - PreC[a-1] << "\n";        
    }


    return 0;
}