#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long int >arr1(n,0);
        for(int i=1;i<n;i++){
            arr1[i]=arr1[i-1]+abs(arr[i]-arr[i-1]);
        }
 
        vector<long long int >arr2(n,0);
        for(int i=n-2;i>=0;i--){
            arr2[i]=arr2[i+1]+abs(arr[i]-arr[i+1]);
        }
 
        long long int a=arr2[1];
        a=min(a,arr1[n-2]);
 
        for(int i=1;i<n-1;i++){
            long long int b =arr1[i-1]+abs(arr[i-1]-arr[i+1])+arr2[i+1];
            a=min(a,b);
        }
        cout<<a<<endl;
    }
}