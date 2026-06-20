//B. Prinzessin der Verurteilung
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> arr;
        for(int i = 0; i < n; i++){
            string curr;
            for(int j=0;j<3 && i+j<n;j++){
                curr+=s[i+j];
                arr.push_back(curr);
            }
        }
        bool ans_found=false;
        for(char c1='a';c1<='z' && !ans_found;c1++){
            string t; 
            t+=c1;
            bool found=false;
            for(string sub:arr){
                if(sub==t){
                    found = true;
                    break;
                }
            }
            if(!found) {
                cout<<t<<endl;
                ans_found=true;
            }
        }
        for(char c1='a';c1<='z' && !ans_found;c1++){
            for(char c2='a';c2<='z' && !ans_found;c2++){
                string t; 
                t+=c1; 
                t+=c2;
                bool found=false;
                for(string sub:arr){
                    if(sub == t){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<t<<endl;
                    ans_found=true;
                }
            }
        }
        for(char c1='a';c1<='z' && !ans_found;c1++){
            for(char c2='a';c2<='z' && !ans_found;c2++){
                for(char c3 ='a';c3<='z' && !ans_found;c3++){
                    string t; 
                    t+=c1; 
                    t+=c2; 
                    t+=c3;
                    bool found=false;
                    for(string sub:arr) {
                        if(sub==t){
                            found = true;
                            break;
                        }
                    }
                    if(!found) {
                        cout<<t<<endl;
                        ans_found=true;
                    }
                }
            }
        }
    }
    return 0;
}