//A. Lucky Sum of Digits
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n=11
=>47
 
 
447
744
474
 
any number => 4*m+7*n format
 
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    string s="";
    while(n>0 && n%7!=0){
        n=n-4;
        s.push_back('4');
 
    }
    while(n>0 && n%7==0){
        n=n-7;
        s.push_back('7');
    }
    if(n==0){
        cout<<s;
    }
    else{
        cout<<-1;
    }
    
    return 0;
}