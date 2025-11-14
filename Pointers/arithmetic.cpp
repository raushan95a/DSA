#include<iostream>
using namespace std;

int main(){
    
    int a=8;
    int *ptr =&a;
    cout<<ptr<<endl;//0x61ff08
    cout<<*ptr<<endl;//8
    ptr=ptr+1;// next 4th adress
    cout<<ptr<<endl;//0x61ff0c
    cout<<*ptr<<endl;//5585155


    bool flag=false;
    bool *p=&flag;
    (*p)++;
    cout<<p<<endl;
    cout<<*p;
}
 