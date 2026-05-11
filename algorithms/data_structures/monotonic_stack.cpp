#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 5, 7, 4};

    // Vector to store the next greater elements, initialized with -1
    vector<int> next_greater(arr.size(), -1);
    stack<int> st; // Stack to keep track of indices

    for (int i = 0; i < arr.size(); i++) {
        // Check and update the next greater element for indices in the stack
        while (!st.empty() && arr[st.top()] < arr[i]) {
            next_greater[st.top()] = arr[i];
            st.pop();
        }
        // Push the current index onto the stack
        st.push(i);
    }

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Next Greater: ";
    for (int num : next_greater) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
