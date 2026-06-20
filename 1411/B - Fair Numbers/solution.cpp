//B. Fair Numbers
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(true){
            int a=n;
            vector<int>arr;
            while(a>0){
                
                arr.push_back(a%10);
                a=a/10;
            }
            int k=0;
            for(int i=0;i<arr.size();i++){
                if(arr[i]!=0 && n%arr[i]!=0){
                    k=1;
                    break;
                }
            }
            if(k==0){
                break;   
            }
            n++;
        }
        cout<<n<<endl;
    }
}