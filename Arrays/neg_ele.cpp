/*Move all negative numbers to beginning and positive to end with constant extra space*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &x: arr)
        cin>>x;
    
    int i=0, j=n-1;
    while(i < j){
        if(arr[i] < 0 && arr[j] > 0){
            i++;
            j--;
        }
        else if(arr[i] < 0 && arr[j] < 0){
            i++;
        }
        else if (arr[i] > 0 && arr[j] > 0){
            j--;
        }
        else{
            int temp= arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
            i++;
            j--;
        }  
    }
    for(int x: arr)
            cout<<x<<" ";
        
    
    return 0;
}
