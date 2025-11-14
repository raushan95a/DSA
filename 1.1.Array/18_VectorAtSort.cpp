#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    v.at(2) = 90; // update or call

    cout << "Updated value at index 2: " << v.at(2) << endl;

    cout << "Vector before sorting: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // sort
    sort(v.begin(), v.end());

    cout << "Vector after sorting: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}