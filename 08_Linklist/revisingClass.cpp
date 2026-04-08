#include<iostream>
using namespace std;

class Student{
public:    
    string name;
    int roll;
    float marks;
    Student(string n,int r,float m){
        this->name=n;
        this->roll=r;
        this->marks=m;
    }
};
void change(Student* s){    
    s->name="harsh";
}

int main(){
    Student*  s= new Student("Roshan",465,95);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;

}
