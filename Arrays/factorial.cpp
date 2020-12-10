#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

void multiply(vector<int>& vec, int n){
    int carry= 0,pro;
    for(int i=0 ; i< vec.size();i++){
        pro= vec[i]*n + carry;
        vec[i]= pro%10;
        carry= pro/10;
    }
    while(carry){
        vec.push_back(carry%10);
        carry/=10;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> vec{1};
    for(int i=2; i<n+1;i++)
        multiply(vec,i);

    vector<int>::reverse_iterator rev;
    for(rev= vec.rbegin();rev!= vec.rend(); ++rev)
        cout<<*rev;
    cout<<endl;
    }

    return 0;
}