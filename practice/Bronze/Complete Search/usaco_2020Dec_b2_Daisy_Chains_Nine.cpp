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

    int N;

    cin >> N;

    vector<int> petal(N);

    for(int i=0;i<N;i++){
        cin >> petal[i];
    }

    int ans=0;

    for(int i=0;i<N;i++){
        int sum = 0;
        for(int j=i;j<N;j++){
            sum += petal[j];
            int length = j-i+1;
            if (sum % length ==0){
                int avg = sum/length;
                for(int k=i;k<=j;k++){
                    if(petal[k]==avg){
                        ans++;
                        break;
                    }
                }
            }
            
        }
    }

    cout << ans;



    return 0;
}