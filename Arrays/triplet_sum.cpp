#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int triplet(int arr[],int n,int x){
    int left,right,sum;
    for(int i=0;i<n-2;i++){
        left=i+1;
        right= n-1;

        while(left<right){
            sum=arr[i] + arr[left] + arr[right];
            if(sum == x)
                return 1;
            else if(sum  < x)
                left++;
            else 
                right--;
        }
        
    }
    return 0;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int &a: arr)
            cin>>a;
        sort(arr,arr+n);
        cout<<triplet(arr,n,x)<<endl;
        
    }
    return 0;
}