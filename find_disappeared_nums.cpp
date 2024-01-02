/*https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/*/
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int len = nums.size();
        bool arr[len + 2];
        memset(arr, false, sizeof(arr));
        for (int i{0}; i < len; ++i) {
            arr[nums[i]] = true;
        }
        for (int i{1}; i <= len; ++i) {
            if (arr[i] == false) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    int array_size, in;
    vector<int> nums;
    Solution ans;
    cin >> array_size;
    for (int i{1}; i <= array_size; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    vector<int> result = ans.findDisappearedNumbers(nums);
    for (auto x: result) {
        cout << x <<' ';
    }
    cout << endl;
    return 0;
}
