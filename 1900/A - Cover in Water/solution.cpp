#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]=='.'){
	            count++;
	        }
	        if(arr[i]=='.'&&arr[i+1]=='.'&&arr[i+2]=='.'){
	            count=2;
	            break;
	        }
	        
	    }
	    cout<<count<<endl;
	}
}