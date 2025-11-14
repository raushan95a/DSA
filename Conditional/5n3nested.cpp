#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%5==0){   
    if(n%3==0){ cout<<"divisible by 5 and 3 both";
    }
    else cout<<"condition not match";// divisible by 5 but not 3
    } 
    else cout<<"not divisible by 3 and 5";


    return 0;

}
