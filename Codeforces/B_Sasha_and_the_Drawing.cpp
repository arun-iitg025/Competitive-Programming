#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minMoves(vector<int>& nums, int k, int maxChanges) {
    int n = nums.size();
    int totalOnes = 0;
    for (int num : nums) {
        totalOnes += num;
    }
    int dylanIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == 1) {
            dylanIndex = i;
            break;
        }
    }
    if (totalOnes == k) return 0;
    vector<int> ones;
    int moves = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == 1) {
            ones.push_back(i);
        }
    }
    vector<int> prefixSum(n + 1, 0);
    for (int i = 1; i <= k; ++i) {
        prefixSum[i] = prefixSum[i - 1] + ones[i - 1];
    }
    int result = n * k;
    for (int i = 0; i + k - 1 < totalOnes; ++i) {
        int cost = (k - 1) * dylanIndex - prefixSum[i + k] + prefixSum[i];
        int swaps = (ones[i + k - 1] - ones[i] - k + 1);
        cost -= swaps;
        if (cost <= maxChanges) {
            result = min(result, swaps + (k - 1));
        }
    }
    return result == n * k ? -1 : result;
}

int main() {
    vector<int> nums = {1,0,0,1,0,1};
    int k = 3;
    int maxChanges = 2;
    cout << minMoves(nums, k, maxChanges) << endl;
    return 0;
}
