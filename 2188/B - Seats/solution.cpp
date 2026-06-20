#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int count = 0;
        for(char c:s) {
            if(c=='1') {
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i] == '1') {
                continue;
            }
            bool l= (i>0 && s[i-1]=='1');
            bool r= (i<n-1 && s[i+1]=='1');
            if(!l && !r){
                count++;
                if(i+1<n && (i+2>=n || s[i+2]=='0')) {
                    s[i+1]='1'; 
                }
                else {
                    s[i]='1';
                }
            }
        }
        cout<<count<<endl;
    }
}