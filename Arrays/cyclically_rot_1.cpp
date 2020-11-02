#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int &x: arr)
            cin>>x;
        
        int temp= arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0]= temp;

        for(int x: arr)
            cout<<x<<ends;
        cout<<endl;

    }
    return 0;
}