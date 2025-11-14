#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    int *p1=&x ,*p2=&y;
    cout<<"enter 1st number: ";
    cin>>*p1;
    cout<<"enter 2nd number: ";
    cin>>*p2;


    cout<<*p1+*p2<<endl;
    cout<<x+y;


   
   
}
