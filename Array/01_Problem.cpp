#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWord(string str) {
        string result;
        for (int i = str.length() - 1; i >= 0; i--) {
            result.push_back(str[i]);
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
