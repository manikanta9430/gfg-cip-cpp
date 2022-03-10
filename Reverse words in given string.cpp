// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<char> st;
        string ans;
        for(int i=S.length()-1;i>=0;i--)
        {
           if(S[i]!='.')
           st.push(S[i]);
           if(S[i]=='.' or i==0)
           {
               while(!st.empty())
               {
                  // char t=st.top();
                  ans+=st.top();
                   st.pop();
                  // ans+=t;
               }
               if(i!=0)
               ans+='.';
           }
       }
       return ans;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
