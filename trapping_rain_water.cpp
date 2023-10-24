/*https://leetcode.com/problems/trapping-rain-water/*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left_max[n];
        int right_max[n];
        int x{0}, y{0};
        for(int i{0}, j{n-1}; i < n and j >= 0; ++i, --j) {
            x = max(x, height[i]);
            y = max(y, height[j]);
            left_max[i] = x;
            right_max[j] = y;
        }
        int water_trapped{0};
        for (int i{0}; i < n; ++i) {
            int x = min(left_max[i], right_max[i]);
            water_trapped += x - height[i];
        }
        return water_trapped;
    }
};

int main() {
    int block_length, in;
    vector<int> height;
    cin >> block_length;
    for (int i{1}; i <= block_length; ++i) {
        cin >> in;
        height.push_back(in);
    }
    Solution ans;
    int water_trapped = ans.trap(height);
    cout << water_trapped << endl;
    return 0;
} 
