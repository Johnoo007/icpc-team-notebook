#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

map<int,int> ver;
map<int,int> hor;
vector<pii> vec;
bool solve(int mid) {
    for (auto h : hor) {
        for (auto v : ver) {
            int pointx = h.first + 1;
            int pointy = v.first + 1;

            int lt = 0, rt = 0, lb = 0, rb = 0;

            for (auto [x, y] : vec) {
                if (x < pointx && y > pointy) {
                    lt++;
                } else if (x < pointx && y < pointy) {
                    lb++;
                } else if (x > pointx && y > pointy) {
                    rt++;
                } else if (x > pointx && y < pointy) {
                    rb++;
                }
            }

            int mx = max({lt, rt, lb, rb});

            if (mx <= mid) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    fastio();
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int N,B;
    cin >> N >> B;
    int left = 1;
    int right = N;

    for(int i = 0 ; i < N ; i++){
        int t1,t2;
        cin >> t1 >> t2;
        vec.push_back({t1,t2});
        
        if(ver.count(t2) == 0){
            ver[t2] = 1;
        }else{
            ver[t2]++;
        }

        if(hor.count(t1) == 0){
            hor[t1] = 1;
        }else{
            hor[t1]++;
        }
    }

    // cout<<endl;
    // for(auto [x,y] : hor){
    //     cout << x << " "<< y << endl ;
    // }cout<<endl;

    // for(auto [x,y] : ver){
    //     cout << x << " "<< y << endl ;
    // }cout<<endl;

    sort(vec.begin(), vec.end(),
         [](const pair<int, int>& a,
            const pair<int, int>& b) {
             return a.second < b.second;
         });

    // cout<<endl;
    // for(auto [x,y]:vec){
    //     cout<<x<<" "<<y<<endl;
    // }

    

    while(left < right){
        int mid = (right-left)/2 + left;

        if(solve(mid)){
            right = mid;
        }else{
            left = mid+1;
        }
    }

    cout << right;
    
    return 0;
}