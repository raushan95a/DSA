#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    // string str ="roshan"  ;
    
    int i=0,count=0;
    while (str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ){
            count+=1;
        }
        i++;
    }
    cout<<"the no. of vowel is : "<<count;

    
}