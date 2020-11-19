// Longest consecutive subsequence 

#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  cin>>arr[i];
  cout<<findLongestConseqSubseq(arr, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  unordered_set<int> set;
  for(int i=0;i<n;i++)
    set.insert(arr[i]);
    
    int l,ml=1;
    for(int i=0;i<n;i++){
       if(set.find(arr[i] -1) == set.end()){
           l=1;
           while(set.find(arr[i] +l) !=set.end())
            l++;
        ml=max(ml,l);
       }
        
    }
    return ml;
}