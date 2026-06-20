#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int mex=0;
        for(int i=0;i<n;i++){
            if(arr[i]==mex){
                mex++;
            }
        }
        if(k-1<mex){
            cout<<k-1<<endl;
        }
        else{
            cout<<mex<<endl;
        }
	}
}