#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string temp;
    vector<string> v;

    while (ss >> temp) {
        v.push_back(temp);
    }

    if (v.empty()) {
        cout << "No words found";
        return 0;
    }

    sort(v.begin(), v.end());

    int maxcount = 1;
    int count = 1;

    // find max frequency
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) count++;
        else count = 1;
        maxcount = max(maxcount, count);
    }

    // print word(s) with max frequency
    count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) count++;
        else count = 1;
        if (count == maxcount)
            cout << v[i] << " " << maxcount << endl;
    }
    
    return 0;
}