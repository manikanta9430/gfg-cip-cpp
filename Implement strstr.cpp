// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    if(x.length()>s.length()) return -1;
    
    for(int i=0;i<s.length();i++){
        if(s[i]==x[0]&&s.substr(i,x.length())==x){
            return i;
        }
    }
    return -1;
}
