#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int pivot(int arr[],int lb,int ub){
    int pivot= arr[ub]; //last element
    int start=lb,end= ub;

    while(start <= end){
        while(arr[start] < pivot){
            start++;
        }
        while(arr[end] >= pivot){
            end--;
        }
        if(start < end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[start],arr[ub]);
    return start;
}

void qs(int arr[],int lb,int ub){
    if(lb<ub){
        int loc= pivot(arr,lb,ub);
        qs(arr,lb,loc-1);
        qs(arr,loc+1,ub);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[]={5,8,7,6,1,3,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);

   qs(arr,0,n-1);
   

    for(int x: arr)
        cout<<x<<ends;
    return 0;
}