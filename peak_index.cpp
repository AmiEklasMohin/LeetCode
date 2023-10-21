/*https://leetcode.com/problems/peak-index-in-a-mountain-array/*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak_index{0};
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
                peak_index = i;
                break;
            }
        }
        return peak_index;
    }
};

int main() {
    int mountain_width, peak_index, height;
    vector<int> mountain;
    cin >> mountain_width;
    for (int i = 1; i <= mountain_width; ++i) {
        cin >> height;
        mountain.push_back(height);
    }
    Solution ans;
    peak_index = ans.peakIndexInMountainArray(mountain);
    cout << peak_index << endl;
    return 0;
}
