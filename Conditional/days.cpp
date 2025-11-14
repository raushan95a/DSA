#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    switch(n){
        
    case 1: cout<<"monday\n";
           break;
    case 2: cout<<"tuesday\n";
           break;
    case 3: cout<<"wednesday\n";
           break;
    case 4: cout<<"thrusday\n";
           break;
    case 5: cout<<"friday\n";
           break;
    case 6: cout<<"saturday\n";
           break;
    case 7: cout<<"sunday\n";
           break;
    default: cout<<"please select number between 1-7";
   


    }


    return 0;

}
