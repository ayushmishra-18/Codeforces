//A. Sum of Round Numbers
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
5009 -> 2 => 5000 9
9876 -> 4 => 9000 800 70 6
10000 -> 1 => 10000
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
        vector<int>arr;
        int a=1;
        while(n>0){
            int d=n%10;
            if(d!=0){
                arr.push_back(d*a);
            }
            a=a*10;
            n=n/10;
        }
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}