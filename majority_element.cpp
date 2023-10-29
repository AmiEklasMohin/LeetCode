/*https://leetcode.com/problems/majority-element/*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int most_occurrence{0}, counter{0};
        map<int,int> mp;
        for (int i{0}; i < nums.size(); ++i) {
            mp[nums[i]] += 1;
            if (mp[nums[i]] > counter) {
                counter += 1;
                most_occurrence = nums[i];
            }
        }
        return most_occurrence;
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
    int most_occurrence = ans.majorityElement(nums);
    cout << most_occurrence << endl;
    return 0;
} 
