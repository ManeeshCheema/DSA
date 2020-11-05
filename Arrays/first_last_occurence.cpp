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
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int &a: arr)
            cin>>a;
        int f=0,l=0;

        for(int i=0;i<n;i++){
            if(arr[i]==x){
                f=i;
                break;
            }
        }
        if(f){
            for(int i=n-1;i>-1;i--){
                if(arr[i]==x){
                    l=i;
                    break;
                }
            }
        }
        if(f){
            cout<<f<<ends<<l;
        }
        else
            cout<<-1;
        cout<<endl;

    }
    return 0;
}