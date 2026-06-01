#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char firstChar=s.at(0);
    if(firstChar>='a' && firstChar<='z'){
        firstChar=firstChar-32;
    }
    s[0]=firstChar;
    cout<<s;
}