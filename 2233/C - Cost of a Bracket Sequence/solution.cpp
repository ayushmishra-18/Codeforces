#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int inf=1e15;
 
/*
we can remove upto k character from the string
Minimize the length of RBS - regular bracket sequence
(())() or () 
))))(())()()(((( -> RBS length = 8 in the middle
the left 4 and the right 4 are not contributing to the RBS
optimal way -> immediately delete the closing bracket from the end of the string,
and delete the starting bracket from the start of the string
if i remove a bracket from rbs -> then rbs length will decrease by 2
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>arr;
    int best=inf;
    vector<int>left,right;
    
    for(int i=0;i<n;i++) {
        if(s[i]=='(') {
            left.push_back(i);
        }
        else {
            right.push_back(i);
        }
    }
 
    for(int i=0;i<=k;i++){
        int xx=i;
        int yy=k-i;
        string a;
        vector<int>cur(n);
        for(int j=n-1;j>=0;j--){
            if(s[j]==')' && yy){
                cur[j]=1;
                yy--;
            }
        }
        for(int j=0;j<n;j++){
            if(s[j]=='(' && xx){
                cur[j]=1;
                xx--;
            }
        }
        for(int j=0;j<n;j++){
            if(cur[j]==0){
                a+=s[j];
            }
        }
        int bal=0,curr=0;
        for(auto &x : a){
            if(x=='('){
                bal++;
            }
            else{
                if(bal>0){
                    bal--;
                    curr++;
                }
            }
        }
        if(curr<best){
            best=curr;
            arr=cur;
        }
    }
    for(auto &x :arr){
        cout<<x;
    }
    cout<<endl; 
}
 
 
signed main() {
    fast_io();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}