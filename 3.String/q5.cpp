#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // input string
   
    int ans=0,product=1;
    // for(int i=s.size()-1;i>=0;i--){
    //     ans+=(s[i]-'0')*product;
    //     product*=10;
    // }
    for(int i=0;i<s.size();i++){
        ans=ans*10+(s[i]-'0')*product; 
    }
    cout<<ans;
    
}
