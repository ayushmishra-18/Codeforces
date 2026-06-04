//A. Everybody Likes Good Arrays!
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(long long int i=0;i<arr.size()-1;i++){
            if (arr[i] % 2 == arr[i+1] % 2) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}