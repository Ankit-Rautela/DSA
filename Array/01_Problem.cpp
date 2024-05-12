#include <bits/stdc++.h>
using namespace std;

/*
// Approach 1: Traverse reverse array and store in another new array
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
*/

// Approach 2: Use 2 pointer concept and swapping 
class Solution
{
    public:
    string reverseWord(string str) {
        int n = str.length();
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            swap(str[start],str[end]);
            start++;
            end--;
        }
        return str;
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
