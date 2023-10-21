/*https://leetcode.com/problems/add-binary/*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int length_a, length_b;
        int carry_bit = 0;
        string bin_add = "";
        length_a = a.length();
        length_b = b.length();
        while (length_a > length_b) {
            b = "0" + b;
            length_b += 1;
        }
        while (length_b > length_a) {
            a = "0" + a;
            length_a += 1;
        }
        for (int i = (length_a - 1); i >= 0; --i) {
            int x = a[i] - 48 + b[i] - 48 + carry_bit;
            if (x == 2) {
                bin_add = "0" + bin_add;
                carry_bit = 1;
            } else if (x == 3) {
                bin_add = "1" + bin_add;
                carry_bit = 1;
            } else if (x == 1){
                bin_add = "1" + bin_add;
                carry_bit = 0;
            } else {
                bin_add = "0" + bin_add;
                carry_bit = 0;
            }
        }
        if (carry_bit == 1) {
            bin_add = "1" + bin_add;
        }
        return bin_add;
    }
};

int main() {
    string binary_a, binary_b, binary_sum;
    cin >> binary_a >> binary_b;
    Solution ans;
    binary_sum = ans.addBinary(binary_a, binary_b);
    cout << binary_sum << endl;
    return 0;
} 
