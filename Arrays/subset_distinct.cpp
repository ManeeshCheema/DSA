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
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int &x: arr1)
            cin>>x;
        for(int &x: arr2)
            cin>>x;
        
        unordered_set<int> arr;
        for(int x: arr1)
            arr.insert(x);
        bool flag= true;
        for(int x: arr2){
            if(arr.find(x) == arr.end()){
                flag= false;
                break;
            }
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}