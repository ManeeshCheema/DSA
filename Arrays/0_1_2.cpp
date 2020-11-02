#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        int z=0,o=0,t=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0) z++;
            else if(x==1) o++;
            else t++;
        }
        x=0;
        while(z--){
            arr[x++]=0;
        }
        while(o--){
            arr[x++]=1;
        }
        while(t--){
            arr[x++]=2;
        }

        for(int a: arr)
            cout<<a<<" ";
    }
    return 0;
}