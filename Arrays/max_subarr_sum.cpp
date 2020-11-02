/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int &x: arr)
        cin>>x;
       int ans=arr[0],temp=arr[0];
       for(int i=1;i<n;i++){
           temp+=arr[i];
           temp= temp > arr[i] ? temp:arr[i];
           ans = temp > ans ? temp:ans;
       }
       cout<<ans<<endl;
    }
    return 0;
}
