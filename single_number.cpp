/*https://leetcode.com/problems/single-number/*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_num{};
        map<int,int> mp;
        for (int i{0}; i < nums.size(); ++i) {
            mp[nums[i]] += 1;
            if (mp[nums[i]] == 1) {
                single_num = nums[i];
            }
        }
        for (int i{0}; i < nums.size(); ++i) {
            if (mp[nums[i]] == 1) {
                single_num = nums[i];
                break;
            }
        }
        return single_num;
    }
};

int main() {
    int num_of_elements ,in;
    vector<int> nums;
    cin >> num_of_elements;
    for (int i{1}; i <= num_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    int single_num = ans.singleNumber(nums);
    cout << single_num << endl;
    return 0;
}
