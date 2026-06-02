//A. Game 23
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n -> m
sooo firstly if m % n != 0 -> then simply -1
else let a= m/n and continue dividing a by 2 and 3
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,m;
    cin>>n>>m;
    int a=m/n;
    int count=0;
    if(m%n!=0){
        cout<<-1<<endl;
    }
    else{
        while(a!=1){
            if(a%3==0){
                a=a/3;
                count++;
            }
            else if(a%2==0){
                a=a/2;
                count++;
            }
            else{
                count=-1;
                break;
            }
        }
        cout<<count<<endl;
    }
    
 
    return 0;
}