//B. Basketball Together
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,d;
    cin>>n>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int l=0,r=arr.size()-1;
    int count=0;
    while(l<=r){
        int a=arr[r];
        int z=d/a+1;
        if(r-l+1>=z){
            count++;
            l=l+z-1;
            r--;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}