#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> str = {"0123","0023","456","00182","940","002901"};
    int max=stoi(str[0]);
    // string maxString=str[0];  // ->if we want tom print string then we use this.
    for(int i=1;i<str.size();i++){
        if(stoi(str[i])>max) {
            max=stoi(str[i]);
            // maxString=str[i];
        }
    }
    cout<<max<<endl;
    // cout<<maxString;
}