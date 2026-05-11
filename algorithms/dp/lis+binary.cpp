#include <bits/stdc++.h>
using namespace std;
int dp[1007];
int arr[1007];
int lis[1007];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int len = 0;
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(dp, dp + len, arr[i]) - dp; //lower >= val upper > val
        //cout << pos << " " << arr[i] << " " << len << endl;
        dp[pos] = arr[i];
        lis[i] = pos;
        if (pos == len) len++;
        for(int j = 0;j <= pos;j++){
            cout << dp[j] << " ";
        }
        cout << endl;
    }
    cout << len << endl;
    for(int i = 0;i < n;i++){
        cout << lis[i] + 1 << " ";
    }
    return 0;
}
/*
5
1 2 3 2 5

10
1 3 2 4 6 5 3 8 9 7
*/
