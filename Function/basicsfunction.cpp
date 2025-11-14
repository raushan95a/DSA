#include<iostream>
using namespace std;
void starTraingle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int a,b,c;
    cout<<"enter a number: ";
    cin>>a>>b>>c;
    starTraingle(a);
    cout<<"hello \n";
    starTraingle(b);
    cout<<"how are u \n";
    starTraingle(c);
   return 0;
}

