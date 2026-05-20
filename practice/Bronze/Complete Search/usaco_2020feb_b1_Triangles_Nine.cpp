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
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    map<int,int> maxx,minx;
    map<int,int> maxy,miny;
    
    for(int i=0;i<n;i++){

        cin >> x[i] >> y[i];
        
        if(!maxx.count(y[i])) maxx[y[i]]=minx[y[i]]=x[i];
        else{
            maxx[y[i]]=max(maxx[y[i]],x[i]);
            minx[y[i]]=min(minx[y[i]],x[i]);
        }

        if(!maxy.count(x[i])) maxy[x[i]]=miny[x[i]]=y[i];
        else{
            maxy[x[i]]=max(maxy[x[i]],y[i]);
            miny[x[i]]=min(miny[x[i]],y[i]);
        }
    }

    ll ans=0;

    for(int i=0;i<n;i++){
        ll width = max(abs(x[i]-maxx[y[i]]),abs(x[i]-minx[y[i]]));
        ll height = max(abs(y[i]-maxy[x[i]]),abs(y[i]-miny[x[i]]));
        ans=max(ans,width*height);
    }

    cout << ans;



    return 0;
}