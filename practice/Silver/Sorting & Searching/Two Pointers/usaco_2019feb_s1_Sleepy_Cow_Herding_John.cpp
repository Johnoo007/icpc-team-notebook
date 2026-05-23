#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    int n;
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    cin >> n;
    ll mx=0;
    vector<ll> cows(n);
    vector<ll> cal(n);

    // input
    for(int i = 0 ; i < n ; i++){
        cin >> cows[i];
    }
    sort(all(cows));

    // max

    for(int i = 0 ; i < n-1 ; i++){
        mx+=cows[i+1]-cows[i]-1;  
    }
    mx -= min(cows[1]-cows[0]-1, cows[n-1]-cows[n-2]-1);
    
    // min

    ll left = 0;
    ll mn = LLONG_MAX;
    for(ll right = 0 ; right < n ; right++){
        while (cows[right]-cows[left] > n-1)
        {
            cal[left] = right-left;
            if( (right-left == n-1) && (cows[right-1] - cows[left] + 1 == n-1 )) cal[left]--;
            left++;
        }
    }
    while (left < n)
    {
        cal[left] = n-left;
        if( (n-left == n-1) && (cows[n-1] - cows[left] + 1 == n-1 )) cal[left]--;
        left++;
    }

    for(auto x : cal){
        mn = min(n-x,mn);
    }
    
    cout<<mn<<"\n"<<mx;
    return 0;
}