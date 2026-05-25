#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<ll> a;
vector<ll> b;

bool solve(ll mid) {
    int pos = 0; 
    for(int i = 0 ; i < b.size() ; i++){
        while (a[pos] >= b[i]-mid && a[pos] <= b[i] + mid) 
        {
            pos++;
            if(pos >= a.size()){
                return true;
            }
        }
    }
    return false;
}

int main() {
    fastio();
    int n,m;
    cin >> n >> m;

    while (n--)
    {
        ll temp;
        cin >> temp;
        a.push_back(temp);
    }
    while (m--)
    {
        ll temp;
        cin >> temp;
        b.push_back(temp);
    }
    

    ll r = 2*pow(10,9);
    ll l = 0;
    while (r > l)
    {
        ll mid = (r - l)/2 + l;
        if(solve(mid)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }

    cout << r;
    
    return 0;
}