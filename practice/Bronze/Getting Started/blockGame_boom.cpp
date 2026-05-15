#include <iostream>
#include <algorithm>
#include <vector>
using namespace::std;
int main() {
    int N;
    cin >> N;

    vector<int> ans(26, 0);

    for (int i = 0; i < N; i++) {
        string a, b;
        cin >> a >> b;

        vector<int> countFront(26, 0);
        vector<int> countBack(26, 0);

        for (char c : a) {
            countFront[c - 'a']++;
        }

        for (char c : b) {
            countBack[c - 'a']++;
        }

        for (int j = 0; j < 26; j++) {
            ans[j] += max(countFront[j], countBack[j]);
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}