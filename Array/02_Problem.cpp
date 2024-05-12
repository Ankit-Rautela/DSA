#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        pair<long long, long long> result;
        
        long long Maxi = LLONG_MIN;
        long long Mini = LLONG_MAX;
        
        for(int i = 0; i < n; i++) {
            if(a[i] > Maxi) {
                Maxi = a[i];
            } 
            if (a[i] < Mini) {
                Mini = a[i];
            }
        }
        result = make_pair(Mini, Maxi);
        
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
