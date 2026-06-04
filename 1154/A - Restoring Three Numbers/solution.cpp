#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int a=arr[3]-arr[0];
    int b=arr[3]-arr[1];
    int c=arr[3]-arr[2];
    cout<<a<<" "<<b<<" "<<c;
}