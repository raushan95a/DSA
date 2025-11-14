#include <bits/stdc++.h>
using namespace std;

class Book {
public:
    char name;   // or use string name; if you want full names
    int price;
    int noOfpage;

    int CountBook(int p) {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(char book) {
        if (name == book)
            return true;
        else
            return false;
    }
};

int main() {
    Book HarryPotter;
    HarryPotter.name = 'h';
    HarryPotter.price = 1000;
    HarryPotter.noOfpage = 500;

    cout << HarryPotter.CountBook(100) << endl;       // returns 0 (since 1000 > 100)
    cout << HarryPotter.isBookPresent('h') << endl;   // returns 1 (true)
}
