#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int i=0;
    // while(s[i]!='\0'){
    //     if(i%2==0){
    //         i++;
    //         continue;
    //     }
    //     else{
    //          s[i]='#';
    //     i++;
    //     }
    // }

    for(int i=1;i<s.length();i+=2){
        s[i]='#';
    }
    cout<<s;
}