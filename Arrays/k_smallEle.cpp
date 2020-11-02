#include<bits\stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &x: arr)
        cin>>x;
    int k;
    cin>>k;
    sort(arr,arr+n);

    cout<<arr[k-1]<<" ";
    return 0;
}