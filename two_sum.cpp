/*https://leetcode.com/problems/two-sum/*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_set<int> uset;
        for (int i = 0; i < nums.size(); ++i) {
            int required = target - nums[i];
            if (uset.find(required) != uset.end()) {
                for (int j = 0; j < i; ++j) {
                    if (nums[j] == required) {
                        indices.push_back(j);
                        indices.push_back(i);
                        return indices;
                    }
                }
            }
            uset.insert(nums[i]);
        }
        return indices;
    }
};

int main() {
    int n, in, target;
    vector<int> nums;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    cin >> target;
    Solution ans;
    vector<int> indices = ans.twoSum(nums, target);
    if (indices.size() == 0) {
        cout << -1 << endl;
    } else {
        cout << "[" << indices[0] << "," << indices[1] << "]" << endl;
    }
    return 0;
} 
