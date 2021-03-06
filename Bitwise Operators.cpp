// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);


 // } Driver Code Ends
// User function Template for C++

// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {

    // Your code here
    int l1=a^a,l2=c^b,l3=a&b,l4=c|l1,l5=~l2;   
    cout<<l1<<endl<<l2<<endl<<l3<<endl<<l4<<endl<<l5<<endl;
 
}

// { Driver Code Starts.

// Driver code to test above function
int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}  // } Driver Code Ends
