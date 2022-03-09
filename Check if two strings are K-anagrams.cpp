// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        int m = str1.length();
        int n = str2.length();
        if(m!=n){
            return false;
        }
        unordered_map<char,int> m1,m2;
        for(int i=0;i<m;i++){
            m1[str1[i]]++;
            m2[str2[i]]++;
        }
        int count =0;
        for(char i='a';i<='z';i++){
            count += abs(m1[i]-m2[i]);
        }
        count =count/2;
        if(count <=k){
            return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends
