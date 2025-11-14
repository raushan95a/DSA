#include<iostream>
using namespace std;
void fun(int a,int b){
   cout<<"address of fun a: "<<&a<<endl;
    cout<<"address of fun b: "<<&b<<endl;
}

int main(){
    int a,b;
    cout<<"address of main a: "<<&a<<endl;
    cout<<"address of main b: "<<&b<<endl;
    
    fun(a,b);
   
}
