// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    string a1,s1=to_string(a);
    for(int i=s1.length()-1;i>=0;i--){
        a1 += s1[i];
    }
    string a2,s2=to_string(b);
    for(int i=s2.length()-1;i>=0;i--){
        a2 += s2[i];
    }
    a= stoi(a1);
    b=stoi(a2);
    
}
void swap(int &a,int &b)
{
    int tem = a;
    a= b;
    b = tem;
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends
