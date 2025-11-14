#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;      // input length of string
    string s;
    cin >> s;      // input string
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
            count++;
    }

    cout << count;
}
