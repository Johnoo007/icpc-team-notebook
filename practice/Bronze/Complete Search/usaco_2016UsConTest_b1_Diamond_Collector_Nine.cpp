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

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n,k;

    cin >> n >> k;
    vector<int> x(n); 

    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    sort(x.begin(),x.end());

    int ans = 0;

    for(int i=0;i<n;i++){
        int count = 0;

        for(int j=i;j<n;j++){

            if(x[j]-x[i] <= k){
                count++;
            }else{
                break;
            }
        }

        ans=max(ans,count);
    }

    cout<<ans;


    return 0;
}