#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int n, b, d;
    cin >> n >> b >> d;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    int kachda = 0;
    int count = 0;
 
    for(int i=0; i<n; i++){
        if(arr[i]<=b){
            kachda += arr[i];
        }
        
        if(kachda > d){
            count++;
            kachda = 0;
        }
    }
    
    cout << count << endl;
    
    return 0;
}