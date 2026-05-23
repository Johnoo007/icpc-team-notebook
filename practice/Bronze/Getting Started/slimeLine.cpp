#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    vector<int> output(testCase);

    for (int i = 0; i < testCase; i++) {
        int slime;
        cin >> slime;

        vector<int> position(slime);

        int total = 0;

        for (int j = 0; j < slime; j++) {
            cin >> position[j];
            total += position[j];
        }

        int x = total / slime;

        int ans = 0;

        for (int j = 0; j < slime; j++) {
            ans = max(ans, abs(position[j] - x));
        }

        output[i] = ans;
    }

    for (int i = 0; i < testCase; i++) {
        cout << output[i] << '\n';
    }

    return 0;
}
