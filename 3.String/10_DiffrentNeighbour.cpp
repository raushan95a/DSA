#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,count=0;
    while(s[i]!='\0'){
        if(s.length()==1){ //when single char
            break;
        }
        if(s.length()==2 && s[0]!=s[1]){
            count=1;
            break;
        }
        if(i==0){
            if(s[i]!=s[i+1] ) 
            count++;
        }
        else if(i==s.length()-1){
            if(s[i]!=s[i-1])
            count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
        i++;
    }
    cout<<count;
}