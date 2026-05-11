#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct StringHash {
    const ll P1 = 31, M1 = 1e9 + 7;
    const ll P2 = 37, M2 = 1e9 + 9;
    vector<ll> h1, h2, p1, p2;

    StringHash(string s) {
        int n = s.size();
        h1.resize(n + 1); h2.resize(n + 1);
        p1.resize(n + 1); p2.resize(n + 1);
        p1[0] = p2[0] = 1;
        for (int i = 0; i < n; i++) {
            h1[i + 1] = (h1[i] * P1 + s[i]) % M1;
            h2[i + 1] = (h2[i] * P2 + s[i]) % M2;
            p1[i + 1] = (p1[i] * P1) % M1;
            p2[i + 1] = (p2[i] * P2) % M2;
        }
    }

    // Get hash of substring s[l...r] (inclusive, 0-indexed)
    pair<ll, ll> get_hash(int l, int r) {
        ll res1 = (h1[r + 1] - h1[l] * p1[r - l + 1] % M1 + M1) % M1;
        ll res2 = (h2[r + 1] - h2[l] * p2[r - l + 1] % M2 + M2) % M2;
        return {res1, res2};
    }
};

int main() {
    string s = "abracadabra";
    StringHash sh(s);
    // Compare "abra" at index 0 and index 7
    if (sh.get_hash(0, 3) == sh.get_hash(7, 10)) {
        cout << "Substrings match!" << endl;
    }
    return 0;
}