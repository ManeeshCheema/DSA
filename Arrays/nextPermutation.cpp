/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

void nextPermutation(vector<int>& v){
    for(auto i= v.rbegin(); i < v.rend() -1;i++){
        if(*i > *(i+1)){
            auto t=upper_bound(v.rbegin(),i,*(i+1));
            iter_swap(i+1,t);
            reverse(v.rbegin(),i+1);
            return;
        }
    }
    sort(v.begin(),v.end());
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        v.push_back(x);
        }

    nextPermutation(v);

    for(int x: v)
        cout<<x<<ends;
    return 0;
}
