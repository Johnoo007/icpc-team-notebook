#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<pii> vec;

ll solve(int i , int j, int k) {
    //
    int wid=0,high=0;
    if(vec[i].first == vec[j].first && vec[i].second == vec[k].second){ // i is middle
        wid = vec[i].second-vec[j].second;
        high = vec[i].first-vec[k].first;
    }
    else if(vec[i].first == vec[k].first && vec[i].second == vec[j].second){ // i is middle
        wid = vec[i].second-vec[k].second;
        high = vec[i].first-vec[j].first;
    }
    else if(vec[j].first == vec[i].first && vec[j].second == vec[k].second){ // j is middle
        wid = vec[j].second-vec[i].second;
        high = vec[j].first-vec[k].first;
    }
    else if(vec[j].first == vec[k].first && vec[j].second == vec[i].second){ // j is middle
        wid = vec[j].second-vec[k].second;
        high = vec[j].first-vec[i].first;
    }
    else if(vec[k].first == vec[i].first && vec[k].second == vec[j].second){ // k is middle
        wid = vec[k].second-vec[i].second;
        high = vec[k].first-vec[j].first;
    }
    else if(vec[k].first == vec[j].first && vec[k].second == vec[i].second){ // k is middle
        wid = vec[k].second-vec[j].second;
        high = vec[k].first-vec[i].first;
    }

    return abs(wid) * abs(high);
    
}

int main() {
    fastio();
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n = 1;
    ll mx=0;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin >> a >> b;
        vec.push_back({a,b});
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1 ; k < n ; k++){
                mx = max(mx,solve(i,j,k));
            }
        }
    }

    cout << mx;

    return 0;
}