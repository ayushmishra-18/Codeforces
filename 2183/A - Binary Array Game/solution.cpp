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
        if(n==1){
            if(arr[0]==0){
                cout<<"Alice"<<endl;
            } 
            else {
                cout<<"Bob"<<endl;
            }
        }
        else if(arr[0]==0 && arr[n-1]==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
 
	}
}