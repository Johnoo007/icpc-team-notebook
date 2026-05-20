#include <bits/stdc++.h>
using namespace std;
int main() {
    int room;
    int temp;
    cin >> room;
    vector<int> cow;
    for(int i=0;i<room;i++){
        cin >> temp;
        cow.push_back(temp);
    }
    vector<int> total(room,0);
    for(int j=0;j<room;j++){
        for(int d=0;d<room;d++){
            total[j]+=cow[(j+d)%room]*d;
        }
    }
    cout << *min_element(total.begin(),total.end());
    return 0;
}