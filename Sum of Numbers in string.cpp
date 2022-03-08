// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;



class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int sum=0;
    	string val="0";
    	for(int i=0;i<str.size();i++){
    	    if((str[i]>= 'a' && str[i]<= 'z') || (str[i]>='A' && str[i]<='Z')){
    	        sum += stoi(val);
    	        val="0";
    	    }
    	    else{
    	        val += str[i];
    	    }
    	}
    	sum += stoi(val);
    	return sum;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  
