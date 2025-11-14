#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    vector<int> v(26);
    for(int i=0;i<s.length();i++){  // updating frequency
        char ch=s[i];
        int ascii=int(ch);
        v[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){    //fing maxfreq
       if(v[i]>max) max=v[i];
    }

    for(int i=0;i<26;i++){   //printing frequency
       if(v[i]==max){
        char ch=(char)(i+97);
        cout<<ch<<" "<<max;
       }
    }
    
}