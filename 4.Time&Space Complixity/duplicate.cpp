// given an array of size n+1 consisting of integer from 1 to n. one of the elements is duplicate in an array. Find that one.
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int> arr = {1,2,4,8,7,6,3,6,5};
    int sum=0;
    int n= arr.size()-1;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int s=n*(n+1)/2;
    cout<<"duplicate element is : "<<sum-s;
 }