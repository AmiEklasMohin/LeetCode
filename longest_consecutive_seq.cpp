/*https://leetcode.com/problems/longest-consecutive-sequence/*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int maximum_length = 0;
        for (int i = 0; i < nums.size(); ++i) {
            uset.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); ++i) {
            int counter = 1;
            int x = nums[i] - 1;
            if (uset.find(x) == uset.end()) {
                x = nums[i] + 1;
                while (uset.find(x) != uset.end()) {
                    counter += 1;
                    x += 1;
                }
            }
            maximum_length = max(maximum_length, counter);
        }
        return maximum_length;
    }
};

int main() {
    int number_of_elements, maximum_length, in;
    vector<int> nums;
    cin >> number_of_elements;
    for (int i = 1; i <= number_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    maximum_length = ans.longestConsecutive(nums);
    cout << maximum_length << endl;
    return 0;
}
