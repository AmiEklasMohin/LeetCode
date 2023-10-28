/*https://leetcode.com/problems/largest-perimeter-triangle/*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int largest_perimeter{0};
        sort(nums.begin(), nums.end());
        for (int i{0}; i < nums.size() -  2; ++i) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                largest_perimeter = nums[i] + nums[i + 1] + nums[i + 2];
            }
        }
        return largest_perimeter;
    }
};

int main() {
    int num_of_sides, in;
    vector<int> sides;
    cin >> num_of_sides;
    for (int i{1}; i <= num_of_sides; ++i) {
        cin >> in;
        sides.push_back(in);
    }
    Solution ans;
    int largest_perimeter = ans.largestPerimeter(sides);
    cout << largest_perimeter << endl;
    return 0;
} 
