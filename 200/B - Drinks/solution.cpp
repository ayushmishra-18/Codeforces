#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float vol[n];
    float total=0;
    for(int i=0;i<n;i++){
        cin>>vol[i];
    }
    for(int i=0;i<n;i++){
        total=total+float(vol[i]/100.0);
    }
    cout<<float((total/n)*100);
}