/*https://leetcode.com/problems/contains-duplicate/*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int i{0}; i < nums.size(); ++i) {
            if (uset.find(nums[i]) != uset.end()) {
                return true;
            } else {
                uset.insert(nums[i]);
            }
        }
        return false;
    }
};

int main() {
    int number_of_elements, in;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i = 1; i <= number_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    bool duplicate_present = ans.containsDuplicate(nums);
    if (duplicate_present) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
