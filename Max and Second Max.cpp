#include <bits/stdc++.h>
using namespace std;
     

class Solution{
  public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = -1, max2= -1;
        
        vector<int> ans;
        for(int i=0;i<sizeOfArray;i++){
            if(arr[i]>max){
                max2=max;
                max=arr[i];
            }
            else if(arr[i]> max2 and arr[i] <max){
                if(arr[i]>max2){
                    max2=arr[i];
                }
            }
        }
        ans.push_back(max);
        ans.push_back(max2);
        return ans;
         
    }
};

int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
} 
