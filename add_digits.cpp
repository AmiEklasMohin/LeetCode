/*https://leetcode.com/problems/add-digits/*/
#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int x{0};
        while (num > 9) {
            x = 0;
            while (num > 0) {
                x = x + num % 10;
                num /= 10;
            }
            num = x;
        }
        return num;
    }
};

int main() {
    int num, single_digit;
    cin >> num;
    Solution ans;
    single_digit = ans.addDigits(num);
    cout << single_digit << endl;
    return 0;
} 
