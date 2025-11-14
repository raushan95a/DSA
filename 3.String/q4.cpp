#include <bits/stdc++.h>
using namespace std;

void myreverse(string &s, int begin, int end) {
    while (begin < end) {
        swap(s[begin++], s[end--]);
        
    }
}

int main() {
    string s;
    cin >> s;  // input string
    // reverse(s.begin()+s.length()/2,s.end());
    myreverse(s, s.length() / 2, s.length() - 1);
    cout << s;
}
