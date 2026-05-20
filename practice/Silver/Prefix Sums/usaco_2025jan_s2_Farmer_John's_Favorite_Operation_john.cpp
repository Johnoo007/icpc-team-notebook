#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll N,M,ans = LLONG_MAX;
    cin >> N >> M;
    vector<ll> nums;
    vector<ll> prefix = {0};
    unordered_set<ll> check;

    for(int i = 0 ; i < N ; i++){
        ll temp;
        cin >> temp;
        nums.push_back(temp % M);
        check.insert(temp % M);
    }

    sort(all(nums));
    for(int i = 0 ; i < N ; i++){
        nums.push_back(nums[i]+M);
    }
    nums.insert(nums.begin(),0);
    
    for(int i = 1 ; i <= 2*N ; i++){
        prefix.push_back(prefix[i-1]+nums[i]);
    }

   for(ll x : check){
        ll sepVal = x + M/2;
        ll start = lower_bound(nums.begin() + 1, nums.end(), x) - nums.begin();
        ll mid = upper_bound(nums.begin() + 1, nums.end(), sepVal) - nums.begin();       
        ll stop = start + N - 1;
        ll first0 = (prefix[mid-1] - prefix[start-1]) - (x*((mid-1) - start + 1));
        ll second0 = (M*((stop) - mid + 1)) - ((prefix[stop] - prefix[mid-1]) - (x*((stop) - mid + 1)));

       // cout <<" sepVal = " << sepVal <<" start = "<< start<<" mid = " << mid <<" stop = "<< stop<<" first0 = " << first0<<" second0 = " << second0 << "\n";

        ans = min(ans, first0+second0);
    }
    cout << ans <<"\n";
} 

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}