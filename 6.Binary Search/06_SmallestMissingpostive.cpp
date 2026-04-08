#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int arr[]={0,1,2,3,5,6,7,9,11};
    int n=9;
    int lo=0;
    int hi=n-1;
    bool flag= false;
    int res=-1;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{
            res= mid;
            hi=mid-1;
        }
    }
    cout<<res;
    return 0;
}
   