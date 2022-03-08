// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s="";
  int n = src.length();
  
  for(int i=0;i<n;i++){
      int c=1;
      int j=i+1;
      char ch=src[i];
      
      while(src[i]==src[j]){
          c++;
          j++;
          i++;
      }
      string a = to_string(c);
      s += src[i];
      s+=a;
  }
  return s;
}     
 
