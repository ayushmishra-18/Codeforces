#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
        int khushi=1,b=1;
        for (int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) {
            continue;
        } 
        else if(arr[i]==arr[i-1]+1){
            b++;
        } 
        else{
            b=1;
        }
        khushi=max(khushi,b);
    }
    cout<<khushi<<endl;
	}
}