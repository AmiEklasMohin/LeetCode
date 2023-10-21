/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/*/
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool positive[101], negative[101];
        int x, counter = 0;
        memset(positive, false, sizeof(positive));
        memset(negative, false, sizeof(negative));
        for (int i = 0; i < nums.size(); ++i) {
            x = abs(nums[i]);
            if (nums[i] >= 0 and !positive[x]) {
                nums[counter] = nums[i];
                positive[x] = true;
                counter += 1;
            } else if (nums[i] < 0 and !negative[x]) {
                nums[counter] = nums[i];
                negative[x] = true;
                counter += 1;
            }
        }
        return counter;
    }
};

int main() {
    vector<int> nums;
    int num_of_elements, in;
    cin >> num_of_elements;
    for (int i = 1; i <= num_of_elements; ++i) {
        cin >> in;
        nums.push_back(in);
    }
    Solution ans;
    int num_of_unique_elements = ans.removeDuplicates(nums);
    cout << num_of_unique_elements << endl;
    for (int i = 0; i < num_of_unique_elements; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
} 
