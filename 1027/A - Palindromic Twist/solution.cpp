//A. Palindromic Twist
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n => even
a -> b
z-> y
c -> b or d
f-> e or g
 
adfa
d -> c or e
f -> e or g
palindrome => aeea
 
 
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int j=n-1;
        while(i<=j){
            char x=s[i],y=s[j];
            char p1=(x=='a')?'1':x-1;
            char p2=(y=='a')?'1':y-1;
            char n1=(x=='z')?'2':x+1;
            char n2=(y=='z')?'2':y+1;
 
            if(p1==p2 || p1==n2){
                i++,j--;
            }
            else if(p2==n1 || p2==p1){
                i++,j--;
            }
            else{
                break;
            }
        }
        if(i>j){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}