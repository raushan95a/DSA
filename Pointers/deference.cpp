#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=&x;
    cout<<*p<<endl;


 int y=98;
 int *p1=&y;
  cout<<y<<endl;
  *p1=7;// value of y is update to 7.
  cout<<y;

   
   
}
