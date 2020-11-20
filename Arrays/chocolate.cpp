/*Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. 
Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet 
    with maximum chocolates and student having packet with minimum chocolates is minimum.*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int arr[n];
        for(int &x: arr)
            cin>>x;
        cin>>m;

        sort(arr,arr+n);
        int dif = arr[m-1] - arr[0];
        for(int i=1;i<n-m +1;i++){
            if((arr[i+m -1] - arr[i] )< dif)
                dif= arr[i+m-1]  - arr[i];
        }
        cout<<dif<<endl;
    }
    return 0;
}