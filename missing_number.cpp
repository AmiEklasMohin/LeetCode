/*https://leetcode.com/problems/missing-number/*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing_num = -1;
        bool present[n + 1];
        memset(present, false, sizeof(present));
        for (int i{0}; i < n; ++i) {
            present[nums[i]] = true;
        }
        for (int i{0}; i <= n; ++i) {
            if (!present[i]) {
                missing_num = i;
            }
        }
        return missing_num;
    }
};

int main() {
    int num, missing_num, in;
    vector<int> nums;
    cin >> num;
    for (int i{1}; i <= num; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    missing_num = ans.missingNumber(nums);
    cout << missing_num << endl;
    return 0;
}
