#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=18;
    int lo=0;
    int hi=n-1;
    bool flag= false;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]==x) {
            flag=true;
            break;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else lo=mid+1; 
    }
cout<<flag;
    return 0;
}
   