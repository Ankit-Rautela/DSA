#include <bits/stdc++.h>
using namespace std;

/* Approach 1:

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        set<int> result;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            result.insert(a[i]);
        }
        
        for(int i = 0; i < m; i++){
            result.insert(b[i]);
        }
        
        for (auto itr = result.begin(); itr != result.end(); itr++){
            count++;
        }
        
        return count;
    }
};
// Time complexity: O(n+m)
// Space Complexity: O(n+m)

*/

/* Approach 2 */
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        set<int> result;
        int count = 0;
        
        int min = (n < m) ? n : m;
        
        for(int i = 0; i < min; i++){
            result.insert(a[i]);
            result.insert(b[i]);
        }
        
        if(n < m){
            for(int i=n; i<m; i++){
                result.insert(b[i]);
            }
        } else if(n > m){
            for(int i=m; i<n; i++){
                result.insert(a[i]);
            }
        }
        for (auto itr = result.begin(); itr != result.end(); itr++){
            count++;
        }
        return count;
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}