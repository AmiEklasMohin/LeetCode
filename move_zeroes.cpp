/*https://leetcode.com/problems/move-zeroes/*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_count{0};
        for (int i{0}; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                zero_count += 1;
            }
        }
        int idx{0};
        while (zero_count > 0) {
            if (nums[idx] == 0) {
                auto it = nums.begin() + idx;
                nums.erase(it);
                nums.push_back(0);
                zero_count -= 1;
            } else {
                idx += 1;
            }
        }
    }
};

int main() {
    int number_of_elements, in;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i{1}; i <= number_of_elements; ++ i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    ans.moveZeroes(nums);
    for (int i{0}; i < number_of_elements; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
} 
