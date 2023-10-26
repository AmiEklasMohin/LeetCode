/*https://leetcode.com/problems/happy-number/*/
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        map<int,bool> mp;
        bool flag = true;
        while (true) {
            int x{0};
            while(n != 0) {
                x = x + (n % 10) * (n % 10);
                n /= 10;
            }
            if (x == 1) {
                break;
            } else if (mp[x]) {
                flag = false;
                break;
            } else {
                mp[x] = true;
            }
            n = x;
        }
        return flag;
    }
};

int main() {
    int num;
    cin >> num;
    Solution ans;
    bool happy = ans.isHappy(num);
    if (happy) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
} 
