#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter a 1st number:";
    cin>>n1;
    int n2;
    cout<<"enter a 2nd number:";
    cin>>n2;
    int n3;
    cout<<"enter a 3rd number:";
    cin>>n3;
    if(n1>n2 && n1>n3) cout<<n1<<"is greatest";
    if(n2>n1 && n2>n3) cout<<n2<<" is greatest ";
    else cout<<n3<<" is greatest";


    return 0;

}
