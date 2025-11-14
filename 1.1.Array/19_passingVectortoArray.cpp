#include <bits/stdc++.h>
using namespace std;
void change(vector<int> a){ //v is get copy in new vector || pass by value
    a[0]=100;
}
void chnge(vector<int>& a){ //v address is passed  || pass by refrence (by using "&"" operator)
    a[0]=100;
}


int main()  {
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";                                        
    }
    cout<<endl;

    change(v);//passing to function
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    cout<<endl;

    chnge(v);//passing to function
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    cout<<endl;

    return 0;
}