#include<bits\stdc++.h>
#define ll long long
using namespace std;

void min_max(int *arr, int n, pair<int,int> &p){
    p.first= arr[0];
    p.second= arr[0];

    for(int i= 1;i<n;i++){
        if(p.first > arr[i])
            p.first= arr[i];
        if(p.second < arr[i])
            p.second= arr[i];
    }

}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int &x: arr)
        cin>>x;
    pair<int,int> minmax;
    for(int &x: arr)
        cout<<x<<" ";
    min_max(arr,size,minmax);
    cout<<"\nmin: "<<minmax.first<<"\nmax: "<<minmax.second;

    return 0;
}
