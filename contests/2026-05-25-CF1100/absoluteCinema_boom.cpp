#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    vector<int> output(testCase);

    for (int t = 0; t < testCase; t++) {
        int length;
        cin >> length;

        vector<int> a(length);
        vector<int> b(length);

        for (int i = 0; i < length; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < length; i++) {
            cin >> b[i];
        }

        int total = 0;
        int biggestMin = 0;

        for (int i = 0; i < length; i++) {
            total += max(a[i], b[i]);
            biggestMin = max(biggestMin, min(a[i], b[i]));
        }

        output[t] = total + biggestMin;
    }

    for (int i = 0; i < testCase; i++) {
        cout << output[i] << '\n';
    }

    return 0;
}
