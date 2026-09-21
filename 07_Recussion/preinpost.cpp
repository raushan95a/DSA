#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"pre:"<<n<<endl;
    fun(n-1);
    cout<<"in:"<<n<<endl;
    fun(n-1);
    cout<<"post:"<<n<<endl;
}
int main(){
    fun(1);
    return 0;
}