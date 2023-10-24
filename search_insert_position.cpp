/*https://leetcode.com/problems/search-insert-position/*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int insert_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return insert_index;
    }
};

int main() {
    int number_of_elements, target, in;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i = 1; i <= number_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    cin >> target;
    Solution ans;
    int insert_position = ans.searchInsert(nums, target);
    cout << insert_position << endl;
    return 0;
} 
