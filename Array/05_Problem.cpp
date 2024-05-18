#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> temp(n);
        int index = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i] >= 0) {
                temp[index] = arr[i];
                index++;
            }
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] < 0){
                temp[index++] = arr[i];
            }
        }
        
        for(int i=0; i<n; i++){
            arr[i] = temp[i];
        }
        
    }
};
/*
Input : 
n = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }

Output : 
1  3  2  11  6  -1  -7  -5
*/

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
