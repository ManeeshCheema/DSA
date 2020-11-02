#include<bits/stdc++.h>
#define ll long long
using namespace std;

void revarr(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int temp= arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1] = temp; 
    }

}

void revarr2(int *arr,int n, int i=0){
    if( i > n/2)
        return;

    int temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i]= temp;

    revarr2(arr,n,i+1);
}

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int &x: arr)
        cin>>x;

    revarr(arr,n);
    for(int x: arr)
        cout<<x<<" ";
        
    cout<<endl;

    revarr2(arr,n);
    for(int x: arr)
        cout<<x<<" ";

    return 0;
}