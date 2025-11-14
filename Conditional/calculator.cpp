#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    
    cout<<"enter:";
    cin>>a>>op>>b;
    
    switch(op){
        
    case '+': cout<<a+b;
           break;
    case '-': cout<<a-b;
           break;
    case '*': cout<<a*b;
           break;
    case '/': cout<<a/b;
           break;     
    default: cout<<"please select valid opeartor";
   


    }


    return 0;

}
