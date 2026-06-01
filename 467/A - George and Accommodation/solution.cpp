#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[2];
    int count=0;
    while(n--){
        for(int i=0;i<2;i++){
            cin>>arr[i];
        }
        if(arr[0]+2<=arr[1]){
            count++;
        }
    }
    cout<<count;
}