/*https://leetcode.com/problems/contains-duplicate-ii/*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        bool flag = false;
        for (int i{0}; i < nums.size(); ++i) {
            if (mp[nums[i]] == 0) {
                mp[nums[i]] = i + 1;
            } else {
                int x = 1 + i - mp[nums[i]];
                if (x <= k) {
                    flag = true;
                    break;
                } else {
                    mp[nums[i]] = i;
                }
            }
        }
        return flag;
    }
};

int main() {
    int number_of_elements, in, k;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i = 1; i <= number_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    cin >> k;
    Solution ans;
    bool duplicate_present = ans.containsNearbyDuplicate(nums, k);
    if (duplicate_present) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
