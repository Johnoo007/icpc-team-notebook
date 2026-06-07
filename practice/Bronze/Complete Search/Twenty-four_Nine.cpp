#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<int> vec;
float final_ans = 0;
void backtracking(int n,float val){
    if (n==4) {
        if(val <= 24){
            final_ans = max(final_ans,val);
        }
        return;
    }

    for(int i=n;i<4;i++){
        backtracking(n+1,val+vec[i]);
        backtracking(n+1,val-vec[i]);
        if(i==0) continue;
        backtracking(n+1,val*vec[i]);
        backtracking(n+1,val/vec[i]);
    }
}

void solve() {
    vec.clear();
    for(int i=0 ;i<4;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    backtracking(0,0);
}

int main() {
    fastio();
    int t = 1;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);


    cin >> t;
    return 0;
}