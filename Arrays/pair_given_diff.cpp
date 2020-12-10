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
        int n,k,ans=-1;
        cin>>n>>k;
        
        int arr[n];
        unordered_set<int> myset;
        for(int &x: arr){
            cin>>x;
            myset.insert(x);
        }
        for(int x: arr){
            if(myset.find(x - k) != myset.end()){
                ans=1;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}