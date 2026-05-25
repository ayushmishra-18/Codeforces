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
    int arr[5][5];
    int a=0,b=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(2-a)+abs(2-b);
    return 0;
}