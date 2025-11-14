#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number: ";
    cin>>n;
    int lastdigit;
    while(n>0){
       lastdigit=n%10;
       sum+=lastdigit;
       n/=10;
    }
    cout<<sum;
    return 0;
}
