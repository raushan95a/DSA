#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="raghav is a maths teacher";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}