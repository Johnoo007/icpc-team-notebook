#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarraysWithSumK(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    int sum = 0;
    int count = 0;

    prefixCount[0] = 1;

    for (int num : nums) {
        sum += num;

        if (prefixCount.count(sum - k)) {
            count += prefixCount[sum - k];
        }

        prefixCount[sum]++;
    }

    return count;
}

int main() {
    //Find the number of subarrays with sum equal k ;
    vector<int> nums = {1, 2, 3, -1, 4, 2};
    int k = 5;

    int result = countSubarraysWithSumK(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
