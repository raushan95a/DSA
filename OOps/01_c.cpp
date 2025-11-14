#include<bits/stdc++.h>
using namespace std;

class Player{
    public:
    int score;
    string name;
    int health;

    void showHealth(){//mem function
        cout<<name<<" health is "<<health<<endl;
    }
};

int main(){
    
    Player Roshan;//variable
    Roshan.score=90;
    Roshan.health=100;
    Roshan.name = "Roshan";

    cout<<Roshan.name<<endl;
    Roshan.showHealth();

    Player harsh;//variable
    harsh.score=92;
    harsh.health=100;
    harsh.name = "harsh";

    cout<<harsh.name;
}