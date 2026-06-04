#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int z=arr[j]%arr[i];
                if(z%2==0){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    a=1;
                    break;
                }
                
            }
            if(a==1){
                break;
            }
        }
        if(a==0){
            cout<<-1<<endl;
        }
    }
}