#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int a;
    int b;
    cin >> a >> b;
    int a1 = a/100;
    int a2 = (a/10)%10;
    int a3 = a%10;

    int b1 = b/100;
    int b2 = (b/10)%10;
    int b3 = b%10;
    
    for(int x=10;x<15000;x++){
        int target = (a1*pow(x,2)) + (a2 * x) + (a3);
        
        // bs on y(10,15000)
        int right = 15000;
        int left = 10;
        int mid = (left+right)/2;

        int ans = 0;

        while(right>=left){
            int numY = (b1*pow(mid,2)) + (b2*mid) + b3;
            
            if(numY>target){
               right = mid - 1;
            }else if(numY<target){
                left = mid + 1;
            }else{
                ans = mid;
                break;
            }
            mid = (left+right)/2;
            
            
        }

        if(ans != 0){
            cout << x << " " << ans << "\n";
            return;
        }
    }
    cout << -1 << "\n";
    return;
}

int main() {
    fastio();
    freopen("whatbase.in", "r", stdin);
    freopen("whatbase.out", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}