/*https://leetcode.com/problems/excel-sheet-column-number/*/
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length() - 1;
        int p{0}, col_num{0};
        for (int i{len} ; i >= 0; --i) {
            int x = columnTitle[i] - 64;
            col_num = col_num + x * pow(26, p);
            ++p;
        }
        return col_num;
    }
};

int main() {
    string title;
    int column_number;
    cin >> title;
    Solution ans;
    column_number = ans.titleToNumber(title);
    cout << column_number << endl;
    return 0;
} 
