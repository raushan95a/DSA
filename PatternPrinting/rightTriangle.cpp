#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
    cout<<endl;
    }
    cout<<"\n";
    //1st way to print reverse traingle
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";

        }
    cout<<endl;
    }
    //2nd way to print reverse traingle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";

        }
    cout<<endl;
    }
    return 0;
}

