//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int n = arr.size(), i, j;
 
    // Find for the pivot element.
    // A pivot is the first element from
    // end of sequenc ewhich doesn't follow
    // property of non-increasing suffix
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            break;
        }
    }
 
    // Check if pivot is not found
    if (i < 0) {
        reverse(arr.begin(), arr.end());
    }
 
    // if pivot is found
    else {
 
        // Find for the successor of pivot in suffix
        for (j = n - 1; j > i; j--) {
            if (arr[j] > arr[i]) {
                break;
            }
        }
 
        // Swap the pivot and successor
        swap(arr[i], arr[j]);
 
        // Minimise the suffix part
        reverse(arr.begin() + i + 1, arr.end());
    }
    return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
