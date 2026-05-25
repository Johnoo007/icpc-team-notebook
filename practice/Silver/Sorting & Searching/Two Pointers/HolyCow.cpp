#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    int n;
    // อ่านค่า n ก่อนนำไปใช้
    if (!(cin >> n)) return 0;
    
    // ใช้ 1-indexed (เริ่มที่ 1) เพื่อให้สูตรคณิตศาสตร์คำนวณง่ายขึ้น
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    ll total_matches = 0;

    // ส่วนที่ 1: นับกรณีที่ a[k] == b[k] แล้วช่วงที่สลับ ไม่ได้ครอบคลุมตำแหน่ง k
    for (int k = 1; k <= n; k++) {
        if (a[k] == b[k]) {
            ll left_choices = 1LL * (k - 1) * k / 2;
            ll right_choices = 1LL * (n - k) * (n - k + 1) / 2;
            total_matches += left_choices + right_choices;
        }
    }

    // ส่วนที่ 2: เตรียมค่าระยะห่างจากขอบ d(x) = min(x, n - x + 1) ของแต่ละสายพันธุ์
    // X เก็บระยะห่างจากฝั่ง array a, Y เก็บจากฝั่ง array b
    vector<vector<ll>> X(n + 1), Y(n + 1);
    for (int i = 1; i <= n; i++) {
        ll dist = min(i, n - i + 1);
        X[a[i]].push_back(dist);
        Y[b[i]].push_back(dist);
    }

    // คำนวณ min(d(i), d(j)) สำหรับวัวสายพันธุ์เดียวกัน
    for (int v = 1; v <= n; v++) {
        if (X[v].empty() || Y[v].empty()) continue;

        // เรียงลำดับเพื่อให้ทำ Binary Search ได้
        sort(X[v].begin(), X[v].end());
        sort(Y[v].begin(), Y[v].end());

        int m = Y[v].size();
        vector<ll> pref(m + 1, 0);
        
        // สร้าง Prefix sum ของ Y
        for (int i = 0; i < m; i++) {
            pref[i + 1] = pref[i] + Y[v][i];
        }

        // จับคู่เพื่อบวกค่า
        for (ll x : X[v]) {
            // หาว่ามีกี่ตัวใน Y ที่ค่าน้อยกว่าหรือเท่ากับ x
            int idx = upper_bound(Y[v].begin(), Y[v].end(), x) - Y[v].begin();
            
            // สำหรับตัวที่น้อยกว่าหรือเท่ากับ x ค่า min คือ y (ดึงจาก Prefix sum)
            // สำหรับตัวที่มากกว่า x ค่า min คือ x 
            total_matches += pref[idx] + 1LL * (m - idx) * x;
        }
    }

    cout << total_matches << "\n";
    return 0;
}