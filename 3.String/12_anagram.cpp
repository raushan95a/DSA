#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="physicswallah";
    string t="wallahsicsphy";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    // cout<<s<<endl<<t<<endl;
    if(s==t) cout<<true;
    else cout<<false;
}