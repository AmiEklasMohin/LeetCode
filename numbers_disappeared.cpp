/*https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/*/
#include <iostream>
#include <cstring>
#include <vector>
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
    int number_of_elements, in;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i{1}; i <= number_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    vector<int> result = ans.findDisappearedNumbers(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
} 
