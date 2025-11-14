#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;  // input string
    IsPalindrome(s) ? cout << "yes it is palindrome" : cout << "not a palindrome";
}
