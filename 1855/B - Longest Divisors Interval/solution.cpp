//B. Longest Divisors Interval
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int count=0;
        long long i;
        for(i = 1; i * i <= n; i++){
            if(n % i == 0){
                count++;
            } else {
                break;
            }
        }
        while(n % i == 0){
            count++;
            i++;
        }
        cout << count << endl;
    }
}