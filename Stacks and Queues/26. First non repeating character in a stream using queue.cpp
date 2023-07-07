//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<int,int> mp;
		    string ans="";
		    queue<char> q;
		    
		    for(int i=0;i<A.length();i++){
		        mp[A[i]]++;
		        q.push(A[i]);
		        
		        while(mp[q.front()]>1 && !q.empty())
		        {
		            q.pop();
		        }
		        if(!q.empty())
		        {   
		            ans+=q.front();
		        }
		        else{
		            ans+='#';
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
