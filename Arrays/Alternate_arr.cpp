/*Alternate + and - int*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

void func(int arr[],int n){
    bool flag;
    for(int i=0;i<n-1;i++){
        //Out of position number
        if(( (arr[i]<0 && (i&1))||(arr[i]>0) && !(i&1) )){
            flag=true;
            for(int j=i+1;j<n;j++){
                //find next +/- number for -/+ out of position number
                if((arr[i]*arr[j]) < 0){
                    swap(arr[i],arr[j]);
                    flag=false; //Continue checking for next out of position number since prev out of position number have been put to correct position
                    break;
                }
            }
            //flag=true.... all number of one set (+/-) have been put to correct position.
            //so remaining numbers will be unchanged 
            if(flag) return; 
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        func(arr,n);
        for(int x: arr)
            cout<<x<<ends;
    }
    return 0;
}