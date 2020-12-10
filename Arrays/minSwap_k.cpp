#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;


int group(int arr[],int n,int k){
    int count,min_swap= INT_MAX,swap;

    for(int i=0;i<n;i++){
        if(arr[i] <= k)
            count++;
    }


    int start=0,end=count -1;
   while(end < n){
       swap=0;
       for(int i= start;i<= end;i++){
           if(arr[i] > k)
            swap++;
       }
        min_swap= min(min_swap, swap);
        end++;
        start++;
    
   }
    return min_swap;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int &x: arr)
            cin>>x;
        cin>>k;
        cout<<group(arr,n,k)<<endl;
    }
    return 0;
}