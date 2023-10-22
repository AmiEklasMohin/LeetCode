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
    int num_of_elements, in, val;
    vector<int> nums;
    cin >> num_of_elements;
    for (int i = 1; i <= num_of_elements; ++i) {
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
