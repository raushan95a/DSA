#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,2,7,46};
   int *ptr=arr;
   ptr[0]=8;
   //method 1
   for(int i=0;i<5;i++){
    cout<<i[ptr]<<" ";
   }
   cout<<endl;
   //method 2
   for(int i=0;i<5;i++){
    cout<<i[arr]<<" ";
   }
   cout<<endl;
   //method 5
   for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
   }

   cout<<endl;
   //method 3 
   for(int i=0;i<5;i++){
    cout<<*ptr<<" ";
    ptr++;
   }


}