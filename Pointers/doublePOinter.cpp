#include<iostream>
using namespace std;
int main(){
    int x=5;
    int*ptr=&x;
    int **p=&ptr;
    //value of x
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    //address of x
    cout<<x<<endl;   //0x61ff08
    cout<<*ptr<<endl;//0x61ff08
    cout<<**p<<endl; //0x61ff08
    
//    (**p)++;
//    cout<<x<<endl;
//     cout<<*ptr<<endl;
//     cout<<**p<<endl;

}
 