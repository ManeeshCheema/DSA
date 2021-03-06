// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> ms;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i] ==0 || sum==0 || ms.find(sum) != ms.end()){
            return true;
        }
        ms.insert(sum);
        
    }
    return false;
}


