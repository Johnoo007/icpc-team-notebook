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
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    int n;
    cin >> n;

    vector<int> greaterThan;
    vector<int> lessThan;

    for(int i=0;i<n;i++){
        char gl;
        int x;

        cin >> gl >> x;

        if (gl == 'G'){
            greaterThan.push_back(x);
        }else{
            lessThan.push_back(x);
        }       
    }

    vector<int> possibleP;

    for(int i : greaterThan) possibleP.push_back(i);
    for(int i : lessThan) possibleP.push_back(i);

    int ans=n;

    for(int p: possibleP){
        int gans =0;
        int lans =0;

        for(int g:greaterThan){
            if(g>p) gans++;
        }
        for(int l:lessThan){
            if(l<p) lans++;
        }

        ans=min(ans,gans+lans);
    }

    cout<<ans;

    return 0;
}