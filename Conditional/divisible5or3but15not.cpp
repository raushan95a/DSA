#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%5==0 || n%3==0){   
    if(n%15!=0){ cout<<"divisible by 3 or 5 but not 15";
    }
    else cout<<"condition not match";
    } 
    else cout<<"not divisible by 3 and 5";


    return 0;

}
