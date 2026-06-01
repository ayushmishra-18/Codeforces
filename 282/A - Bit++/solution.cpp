#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="X++" || s=="++X"){
            X+=1;
        }
        if(s=="X--" || s=="--X"){
            X-=1;
        }
    }
    cout<<X;
}