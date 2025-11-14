#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string t = s;               // make a copy of original
    reverse(t.begin(), t.end()); // reverse the copy
    
    s += t;                     // append reversed string
    cout << s;
}
