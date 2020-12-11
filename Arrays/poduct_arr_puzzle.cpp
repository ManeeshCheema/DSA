//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   long long pro=1,product,zero=0;
    for(auto x : nums){
        if(x)
            pro*=x;
        else{
            zero++; // count of zeros
            if(zero > 1){
                //more than 1 zero in nums
                vector<long long int> ans(nums.size(),0);
                return ans;
            }
        } 
    }
    product = pro;
    vector<long long int > ans;
    for(auto x: nums){
        if(x){
            if(zero)
                ans.push_back(0);
            else
                ans.push_back(pro/x);
        }
        else
            ans.push_back(pro);
        pro= product;
    }
    return ans;
}
