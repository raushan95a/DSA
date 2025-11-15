#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    int score=100;
    int health=100;
    public:
    //setter
    void setscore(int s){
        cout<<"score is get set"<<endl;
        score=s;
    }
    void sethealth(int h){
        cout<<"health is get set"<<endl;
        health=h;
    }g
    //getter
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    
};

int main(){
    
    Player roshan;//variable
    roshan.sethealth(100);
    roshan.setscore(90);
    // roshan.gethealth();
    // roshan.getscore();
    cout << "Player health: " << roshan.gethealth() << endl;
    cout << "Player score: " << roshan.getscore() << endl;
    
}