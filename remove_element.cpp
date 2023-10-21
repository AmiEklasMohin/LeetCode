/*https://leetcode.com/problems/remove-element/*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> result;
        int counter = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                result.push_back(nums[i]);
                counter += 1;
            }
        }
        for (int i = 0; i < counter; ++i) {
            nums[i] = result[i];
        }
        return counter;
    }
};

int main() {
    int n, in, val;
    vector<int> nums;
    for (int i = 1; i <= n; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    cin >> val;
    Solution ans;
    int k = ans.removeElement(nums, val);
    cout<< k << endl;
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
} 
