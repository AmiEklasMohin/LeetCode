/*https://leetcode.com/problems/plus-one/*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> result;
        for (int i = (digits.size() - 1); i >= 0; --i) {
            int x = digits[i] + carry;
            if (x == 10) {
                digits[i] = 0;
                carry = 1;
            } else {
                digits[i] = x;
                carry = 0;
                break;
            }
        }
        if (carry == 1) {
            result.push_back(carry);
        }
        for (int i = 0; i < digits.size(); ++i) {
            result.push_back(digits[i]);
        }
        return result;
    }
};

int main() {
    int num_of_digits, in;
    vector<int> digits;
    cin >> num_of_digits;
    for (int i = 1; i <= num_of_digits; ++i) {
        cin >> in;
        digits.push_back(in);
    }
    Solution ans;
    vector<int> result = ans.plusOne(digits);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

