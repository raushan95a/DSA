#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    stringstream st(s);
    string temp;

    while(st>>temp){
        cout<<temp<<endl;
    }
    
}