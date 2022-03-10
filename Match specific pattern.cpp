// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string p)
{
       //Your code here
       vector<string>ans;
    int k=p.size();
    int i;
    
    for(auto x:dict)
    {
        int n=x.size();
        
        if(n!=k)
        continue;
        
        for(i=1;i<k;i++)
        {
            if(x[i]!=x[i-1] and p[i]!=p[i-1])
            continue;
            
            else if(x[i]==x[i-1] and p[i]==p[i-1])
            continue;
            
            else
            break;
        }
        
        if(i==k)
        ans.push_back(x);
        
    }
    
    return ans;
}
